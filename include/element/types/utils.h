#pragma once

#include "../defs.h"
#include <inttypes.h>

ELM_BEGIN_C

typedef struct {
    union {
        uint8_t bytes[16];
        struct {
            uint64_t low;
            uint64_t high;
        };
        struct {
            uint32_t time_low;
            uint16_t time_mid;
            uint16_t time_hi_and_version;
            uint8_t  clk_seq_hi_res;
            uint8_t  clk_seq_low;
            uint8_t  node[6];
        };
    };
} element_uuid_t; 

ELM_END_C