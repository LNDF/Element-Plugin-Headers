#pragma once

#include <inttypes.h>
#include "../defs.h"

ELM_BEGIN_C

typedef struct {
    const char* name;
    const void* data;
} element_module_t;

typedef struct {
    element_module_t* modules;
    uint32_t count;
    uint32_t api_version;
} element_modules_t;

ELM_END_C