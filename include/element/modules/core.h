#pragma once

#include "../defs.h"

ELM_BEGIN_C

ELM_FUNCTION(close_application, void)

typedef struct {
    ELM_FUNCTION_IMPL(close_application);
} element_module_core_t;

ELM_END_C