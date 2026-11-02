// Versioned configuration stream validator. Writes target a STAGING bank only.
// Consumers must not activate staging data before the one-cycle commit pulse.
module dmz_scene_loader(
 input clk,reset,start,stream_error,
 input byte_valid,byte_last,input [7:0] byte_data,output wire byte_ready,
 input staging_ready,output wire staging_write,output wire [19:0] staging_addr,
 output wire [7:0] staging_data,
 output reg busy,ready,commit,output reg [7:0] error,
 output reg [6:0] resources,output reg [5:0] pages,
 output reg [7:0] widgets,output reg [4:0] entry_page,output reg [1:0] format_version,output reg [20:0] payload_length);
reg [7:0] header[0:31];
reg [20:0] position;
reg [31:0] expected_crc,crc;
reg [20:0] payload_bytes;
reg header_done,bad_prefix,bad_reserved;
wire [31:0] header_length={header[11],header[10],header[9],header[8]};
wire [31:0] header_crc={header[15],header[14],header[13],header[12]};
wire [9:0] count_sum={2'd0,header[16]}+{2'd0,header[17]}+{2'd0,header[18]};
function automatic [31:0] crc_byte(input [31:0] old,input [7:0] data);
 reg [31:0] value;integer bitnum;
 begin value=old^{24'd0,data};for(bitnum=0;bitnum<8;bitnum=bitnum+1)
 value=value[0]?(value>>1)^32'hedb88320:value>>1;crc_byte=value;end
endfunction
assign byte_ready=busy&&(!header_done||staging_ready);
assign staging_write=busy&&header_done&&byte_valid&&staging_ready;
assign staging_addr=position-21'd32;
assign staging_data=byte_data;
task fail(input [7:0] code);
 begin error<=code;busy<=0;ready<=0;end
endtask
always @(posedge clk) begin
 if(reset) begin position<=0;expected_crc<=0;crc<=32'hffffffff;payload_bytes<=0;
  busy<=0;ready<=0;commit<=0;error<=0;resources<=0;pages<=0;widgets<=0;entry_page<=0;format_version<=0;payload_length<=0;header_done<=0;bad_prefix<=0;bad_reserved<=0;end
 else begin
  commit<=0;
  if(start) begin position<=0;crc<=32'hffffffff;busy<=1;ready<=0;error<=0;header_done<=0;bad_prefix<=0;bad_reserved<=0;end
  else if(busy&&stream_error) fail(8'd1);
  else if(busy&&byte_valid&&byte_ready) begin
   if(!header_done) begin
    if(position<20)header[position[4:0]]<=byte_data;
    if(position>=20&&byte_data!=0)bad_reserved<=1;
    case(position)
     0:if(byte_data!="D")bad_prefix<=1;
     1:if(byte_data!="M")bad_prefix<=1;
     2:if(byte_data!="Z")bad_prefix<=1;
     3:if(byte_data!="P")bad_prefix<=1;
     4:if(byte_data!=1&&byte_data!=2)bad_prefix<=1;
     5,7:if(byte_data!=0)bad_prefix<=1;
     6:if(byte_data!=32)bad_prefix<=1;
     default:begin end
    endcase
    if(byte_last) fail(8'd2);
    else if(position==31) begin
     if(bad_prefix) fail(8'd3);
     else if(header[16]==0||header[16]>64||header[17]==0||header[17]>32||header[18]>128||
             header[19]>=header[17]||(header[4]==1&&(header_length!=({22'd0,count_sum}<<5)||header_length>7168))||
             (header[4]==2&&(header_length<({22'd0,count_sum}<<5)||header_length>1048576))) fail(8'd4);
     else if(byte_data!=0||bad_reserved) fail(8'd5);
     else begin header_done<=1;payload_bytes<=header_length[20:0];payload_length<=header_length[20:0];format_version<=header[4][1:0];expected_crc<=header_crc;
      resources<=header[16][6:0];pages<=header[17][5:0];widgets<=header[18];entry_page<=header[19][4:0];position<=32;end
    end else position<=position+1'b1;
   end else begin
    crc<=crc_byte(crc,byte_data);
    if(position-21'd32==payload_bytes-1'b1) begin
     if(!byte_last) fail(8'd6);
     else if((crc_byte(crc,byte_data)^32'hffffffff)!=expected_crc) fail(8'd7);
     else begin busy<=0;ready<=1;commit<=1;end
    end else if(byte_last) fail(8'd2);
    else position<=position+1'b1;
   end
  end
 end
end
endmodule
