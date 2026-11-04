// One physical event has exactly one destination: legacy control OR UI action.
// UART remains a development command source. A simultaneous physical event queues.
module dmz_ui_keys(input clk,reset,key_valid,input [3:0] key_code,
 input menu_open,platform_active,audio_paused,tone_muted,
 input uart_valid,input [7:0] uart_byte,
 output wire command_valid,output wire [7:0] command_byte,
 output wire ui_valid,output wire [3:0] ui_action);
// Development-only navigation transport: D1..DC carry UI actions.
// Runtime operation continues to use exactly the same physical key event path.
wire uart_ui=uart_valid&&uart_byte[7:4]==4'hd&&
 (uart_byte[3:0]>=1&&uart_byte[3:0]<=12);
reg pending;reg [3:0] held;
wire [3:0] selected=pending?held:key_code;
wire physical=pending||key_valid;
reg mapped,is_ui;reg [7:0] command;reg [3:0] action;
always @* begin
 mapped=1;is_ui=0;command=0;action=0;
 case(selected)
  0:command="+";1:command="-";
  2:if(platform_active)begin if(!menu_open)begin is_ui=1;action=9;end else mapped=0;end else command="G";3:command=tone_muted?"U":"M";
  4:if(platform_active)begin is_ui=1;action=12;end else command="X";
  5:if(platform_active)begin is_ui=1;action=11;end else command="Q";
  7:begin is_ui=1;action=10;end
  12:command=menu_open?"V":"F";
  13:if(platform_active&&!menu_open)begin is_ui=1;action=8;end else command="J";
  15:if(platform_active&&!menu_open)begin is_ui=1;action=7;end else command=8'h80;
  8:if(menu_open)command="F";else begin is_ui=1;action=6;end
  10:if(menu_open)command="E";else begin is_ui=1;action=5;end
  14:if(menu_open)command="I";else begin is_ui=1;action=1;end
  6:if(menu_open)command="O";else begin is_ui=1;action=2;end
  11:if(menu_open)command="{";else begin is_ui=1;action=3;end
  9:if(menu_open)command="}";else begin is_ui=1;action=4;end
  default:mapped=0;
 endcase
 // While a resource menu is open, ordinary notification does not leak to UI.
 if(menu_open&&selected==7)mapped=0;
end
assign command_valid=!reset&&((uart_valid&&!uart_ui)||(physical&&mapped&&!is_ui&&!uart_valid));
assign command_byte=uart_valid?uart_byte:command;
assign ui_valid=!reset&&(uart_ui||(!uart_valid&&physical&&mapped&&is_ui));
assign ui_action=uart_ui?uart_byte[3:0]:action;
always @(posedge clk) begin
 if(reset)begin pending<=0;held<=0;end
 else begin
  if(!uart_valid)pending<=0;
  if(uart_valid&&key_valid&&!pending)begin pending<=1;held<=key_code;end
  // A pending event consumes this cycle; retain a new event for the next cycle.
  if(!uart_valid&&pending&&key_valid)begin pending<=1;held<=key_code;end
 end
end
endmodule
