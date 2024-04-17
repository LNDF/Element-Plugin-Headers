#pragma once

#include "../defs.h"
#include "../types/event.h"

ELM_BEGIN_C

ELM_FUNCTION(register_event, element_event_t, const char*, void*)
ELM_FUNCTION(unregister_event, void, element_event_t)

typedef struct {
    ELM_FUNCTION_IMPL(register_event);
    ELM_FUNCTION_IMPL(unregister_event);
} element_module_event_t;

ELM_END_C