// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTB_PLATFORM_MEDIA__DPI_H_
#define VERILATED_VTB_PLATFORM_MEDIA__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at sim/platform\tb_platform_media.sv:3:38
    extern unsigned int dmz_disk(unsigned int lba, unsigned int index);
    // DPI import at sim/platform\tb_platform_media.sv:4:38
    extern unsigned int dmz_expected_pcm(unsigned int wave, unsigned int sample);
    // DPI import at sim/platform\tb_platform_media.sv:5:38
    extern unsigned int dmz_expected_pixel(unsigned int page, unsigned int pixel);

#ifdef __cplusplus
}
#endif

#endif  // guard
