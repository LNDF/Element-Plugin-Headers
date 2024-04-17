#pragma once

#ifdef __cplusplus
#define ELM_BEGIN_C extern "C" {
#define ELM_END_C }
#else
#define ELM_BEGIN_C
#define ELM_END_C
#endif

#ifndef NULL
#define NULL 0L
#endif

#ifdef WIN32
#define ELM_EXPORT __declspec(dllexport)
#define ELM_IMPORT __declspec(dllimport)
#elif defined(__GNUC__) || defined(__clang__)
#define ELM_EXPORT __attribute__((visibility("default")))
#define ELM_IMPORT
#else
#define ELM_EXPORT
#define ELM_IMPORT
#endif

#define ELM_FUNCTION(name, return_type, ...) typedef return_type (*element_##name##_t)(__VA_ARGS__);
#define ELM_OPAQUE_HANDLE(name) typedef void* ELM_##name;
#define ELM_OPAQUE_TYPE(name) typedef void* element_##name##_t;

#define ELM_FUNCTION_IMPL(name) element_##name##_t name##_impl

#define ELM_API ELM_EXPORT