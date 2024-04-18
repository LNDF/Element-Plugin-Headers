#pragma once

#include "../defs.h"
#include "../types/scenegraph.h"
#include "../types/quat.h"
#include "../types/mat.h"
#include "../types/vec.h"
#include "../types/utils.h"

ELM_BEGIN_C

ELM_FUNCTION(scene_load, void, element_uuid_t)
ELM_FUNCTION(scene_unload, void, element_uuid_t)
ELM_FUNCTION(scene_get, element_scene_t, element_uuid_t)
ELM_FUNCTION(scene_get_root_node, element_uuid_t, element_scene_t)
ELM_FUNCTION(scene_get_default_camera, element_uuid_t, element_scene_t)
ELM_FUNCTION(scene_set_default_camera, void, element_scene_t, element_uuid_t)
ELM_FUNCTION(node_get, element_node_t, element_uuid_t)
ELM_FUNCTION(node_free, void, element_node_t)
ELM_FUNCTION(node_get_uuid, element_uuid_t, element_node_t)
ELM_FUNCTION(node_set_enabled, void, element_node_t, int)
ELM_FUNCTION(node_is_enabled, int, element_node_t)
ELM_FUNCTION(node_set_name, void, element_node_t, const char *)
ELM_FUNCTION(node_get_name, const char *, element_node_t)
ELM_FUNCTION(node_get_children, uint32_t, element_node_t, element_uuid_t*)
ELM_FUNCTION(node_get_parent, element_uuid_t, element_node_t)
ELM_FUNCTION(node_transform_get_cache_number, uint32_t, element_node_t)
ELM_FUNCTION(node_transform_get_matrix, element_mat4_t, element_node_t)
ELM_FUNCTION(node_transform_get_world_matrix, element_mat4_t, element_node_t)
ELM_FUNCTION(node_transform_get_position, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_scale, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_rotation, element_quat_t, element_node_t)
ELM_FUNCTION(node_transform_set_position, void, element_node_t, element_vec3_t)
ELM_FUNCTION(node_transform_set_scale, void, element_node_t, element_vec3_t)
ELM_FUNCTION(node_transform_set_rotation, void, element_node_t, element_quat_t)
ELM_FUNCTION(node_transform_get_world_position, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_world_scale, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_world_rotation, element_quat_t, element_node_t)
ELM_FUNCTION(node_transform_set_world_position, void, element_node_t, element_vec3_t)
ELM_FUNCTION(node_transform_set_world_scale, void, element_node_t, element_vec3_t)
ELM_FUNCTION(node_transform_set_world_rotation, void, element_node_t, element_quat_t)
ELM_FUNCTION(node_transform_get_front, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_right, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_up, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_back, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_left, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_down, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_world_front, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_world_right, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_world_up, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_world_back, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_world_left, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_get_world_down, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_rotate_axis, void, element_node_t, element_vec3_t, float)
ELM_FUNCTION(node_transform_rotate_world_axis, void, element_node_t, element_vec3_t, float)
ELM_FUNCTION(node_transform_look_at, void, element_node_t, element_vec3_t, element_vec3_t)
ELM_FUNCTION(node_transform_world_look_at, void, element_node_t, element_vec3_t, element_vec3_t)
ELM_FUNCTION(node_transform_rotate_euler, void, element_node_t, element_vec3_t)
ELM_FUNCTION(node_transform_set_euler_rotation, void, element_node_t, element_vec3_t)
ELM_FUNCTION(node_transform_get_euler_angles, element_vec3_t, element_node_t)
ELM_FUNCTION(node_transform_world_rotate_euler, void, element_node_t, element_vec3_t)
ELM_FUNCTION(node_transform_set_world_euler_rotation, void, element_node_t, element_vec3_t)
ELM_FUNCTION(node_transform_get_world_euler_angles, element_vec3_t, element_node_t)
ELM_FUNCTION(node_camera_get_near_plane, float, element_node_t)
ELM_FUNCTION(node_camera_set_near_plane, void, element_node_t, float)
ELM_FUNCTION(node_camera_get_far_plane, float, element_node_t)
ELM_FUNCTION(node_camera_set_far_plane, void, element_node_t, float)
ELM_FUNCTION(node_camera_get_fov, float, element_node_t)
ELM_FUNCTION(node_camera_set_fov, void, element_node_t, float)
ELM_FUNCTION(node_mesh_get_mesh, element_uuid_t, element_node_t)
ELM_FUNCTION(node_mesh_set_mesh, void, element_node_t, element_uuid_t)
ELM_FUNCTION(node_mesh_get_material, element_uuid_t, element_node_t)
ELM_FUNCTION(node_mesh_set_material, void, element_node_t, element_uuid_t)

typedef struct {
    ELM_FUNCTION_IMPL(scene_load);
    ELM_FUNCTION_IMPL(scene_unload);
    ELM_FUNCTION_IMPL(scene_get);
    ELM_FUNCTION_IMPL(scene_get_root_node);
    ELM_FUNCTION_IMPL(scene_get_default_camera);
    ELM_FUNCTION_IMPL(scene_set_default_camera);
    ELM_FUNCTION_IMPL(node_get);
    ELM_FUNCTION_IMPL(node_free);
    ELM_FUNCTION_IMPL(node_get_uuid);
    ELM_FUNCTION_IMPL(node_set_enabled);
    ELM_FUNCTION_IMPL(node_is_enabled);
    ELM_FUNCTION_IMPL(node_set_name);
    ELM_FUNCTION_IMPL(node_get_name);
    ELM_FUNCTION_IMPL(node_get_children);
    ELM_FUNCTION_IMPL(node_get_parent);
    ELM_FUNCTION_IMPL(node_transform_get_cache_number);
    ELM_FUNCTION_IMPL(node_transform_get_matrix);
    ELM_FUNCTION_IMPL(node_transform_get_world_matrix);
    ELM_FUNCTION_IMPL(node_transform_get_position);
    ELM_FUNCTION_IMPL(node_transform_get_scale);
    ELM_FUNCTION_IMPL(node_transform_get_rotation);
    ELM_FUNCTION_IMPL(node_transform_set_position);
    ELM_FUNCTION_IMPL(node_transform_set_scale);
    ELM_FUNCTION_IMPL(node_transform_set_rotation);
    ELM_FUNCTION_IMPL(node_transform_get_world_position);
    ELM_FUNCTION_IMPL(node_transform_get_world_scale);
    ELM_FUNCTION_IMPL(node_transform_get_world_rotation);
    ELM_FUNCTION_IMPL(node_transform_set_world_position);
    ELM_FUNCTION_IMPL(node_transform_set_world_scale);
    ELM_FUNCTION_IMPL(node_transform_set_world_rotation);
    ELM_FUNCTION_IMPL(node_transform_get_front);
    ELM_FUNCTION_IMPL(node_transform_get_right);
    ELM_FUNCTION_IMPL(node_transform_get_up);
    ELM_FUNCTION_IMPL(node_transform_get_back);
    ELM_FUNCTION_IMPL(node_transform_get_left);
    ELM_FUNCTION_IMPL(node_transform_get_down);
    ELM_FUNCTION_IMPL(node_transform_get_world_front);
    ELM_FUNCTION_IMPL(node_transform_get_world_right);
    ELM_FUNCTION_IMPL(node_transform_get_world_up);
    ELM_FUNCTION_IMPL(node_transform_get_world_back);
    ELM_FUNCTION_IMPL(node_transform_get_world_left);
    ELM_FUNCTION_IMPL(node_transform_get_world_down);
    ELM_FUNCTION_IMPL(node_transform_rotate_axis);
    ELM_FUNCTION_IMPL(node_transform_rotate_world_axis);
    ELM_FUNCTION_IMPL(node_transform_look_at);
    ELM_FUNCTION_IMPL(node_transform_world_look_at);
    ELM_FUNCTION_IMPL(node_transform_rotate_euler);
    ELM_FUNCTION_IMPL(node_transform_set_euler_rotation);
    ELM_FUNCTION_IMPL(node_transform_get_euler_angles);
    ELM_FUNCTION_IMPL(node_transform_world_rotate_euler);
    ELM_FUNCTION_IMPL(node_transform_set_world_euler_rotation);
    ELM_FUNCTION_IMPL(node_transform_get_world_euler_angles);
    ELM_FUNCTION_IMPL(node_camera_get_near_plane);
    ELM_FUNCTION_IMPL(node_camera_set_near_plane);
    ELM_FUNCTION_IMPL(node_camera_get_far_plane);
    ELM_FUNCTION_IMPL(node_camera_set_far_plane);
    ELM_FUNCTION_IMPL(node_camera_get_fov);
    ELM_FUNCTION_IMPL(node_camera_set_fov);
    ELM_FUNCTION_IMPL(node_mesh_get_mesh);
    ELM_FUNCTION_IMPL(node_mesh_set_mesh);
    ELM_FUNCTION_IMPL(node_mesh_get_material);
    ELM_FUNCTION_IMPL(node_mesh_set_material);
} element_module_scenegraph_t;

ELM_END_C