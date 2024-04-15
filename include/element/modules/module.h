#pragma once

#include "../defs.h"
#include "../types/module.h"

ELM_BEGIN_C

ELM_FUNCTION(get_module, element_module_t*, const char* name)
ELM_FUNCTION(module_exists, int, const char* name)
ELM_FUNCTION(register_module, void, const element_module_t* module)
ELM_FUNCTION(unregister_module, void, const char* name)

ELM_END_C