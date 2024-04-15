#pragma once

#include "../defs.h"
#include "vec.h"

ELM_BEGIN_C

typedef struct {
    element_vec2_t x, y;
} element_mat2_t;

typedef struct {
    element_vec3_t x, y;
} element_mat2x3_t;

typedef struct {
    element_vec4_t x, y;
} element_mat3x4_t;

typedef struct {
    element_vec2_t x, y, z;
} element_mat3x2_t;

typedef struct {
    element_vec3_t x, y, z;
} element_mat3_t;

typedef struct {
    element_vec4_t x, y, z;
} element_mat3x4_t;

typedef struct {
    element_vec2_t x, y, z, w;
} element_mat4x2_t;

typedef struct {
    element_vec3_t x, y, z, w;
} element_mat4x3_t;

typedef struct {
    element_vec4_t x, y, z, w;
} element_mat4_t;

ELM_END_C