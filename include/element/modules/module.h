#pragma once

#include "../defs.h"
#include "../types/module.h"

ELM_BEGIN_C

ELM_FUNCTION(get_module, const void*, const char* name)
ELM_FUNCTION(module_exists, int, const char* name)
ELM_FUNCTION(register_module, void, const element_module_t* module)
ELM_FUNCTION(unregister_module, void, const char* name)

typedef struct {
    ELM_FUNCTION_IMPL(get_module);
    ELM_FUNCTION_IMPL(module_exists);
    ELM_FUNCTION_IMPL(register_module);
    ELM_FUNCTION_IMPL(unregister_module);
} element_module_module_t;

ELM_END_C