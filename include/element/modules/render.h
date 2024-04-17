#pragma once

#include "../defs.h"
#include "../types/scenegraph.h"

ELM_BEGIN_C

ELM_FUNCTION(select_camera, void, element_node_t)
ELM_FUNCTION(select_camera_and_scene, void, element_scene_t, element_node_t)
ELM_FUNCTION(select_scene, void, element_scene_t)
ELM_FUNCTION(unselect_scene_t, void)

typedef struct {
    ELM_FUNCTION_IMPL(select_camera);
    ELM_FUNCTION_IMPL(select_camera_and_scene);
    ELM_FUNCTION_IMPL(select_scene);
    ELM_FUNCTION_IMPL(unselect_scene_t);
} element_module_render_t;

ELM_END_C