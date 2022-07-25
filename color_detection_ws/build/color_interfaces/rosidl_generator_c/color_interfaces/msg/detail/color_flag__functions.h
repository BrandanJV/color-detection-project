// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from color_interfaces:msg/ColorFlag.idl
// generated code does not contain a copyright notice

#ifndef COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__FUNCTIONS_H_
#define COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "color_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "color_interfaces/msg/detail/color_flag__struct.h"

/// Initialize msg/ColorFlag message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * color_interfaces__msg__ColorFlag
 * )) before or use
 * color_interfaces__msg__ColorFlag__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_color_interfaces
bool
color_interfaces__msg__ColorFlag__init(color_interfaces__msg__ColorFlag * msg);

/// Finalize msg/ColorFlag message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_interfaces
void
color_interfaces__msg__ColorFlag__fini(color_interfaces__msg__ColorFlag * msg);

/// Create msg/ColorFlag message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * color_interfaces__msg__ColorFlag__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_color_interfaces
color_interfaces__msg__ColorFlag *
color_interfaces__msg__ColorFlag__create();

/// Destroy msg/ColorFlag message.
/**
 * It calls
 * color_interfaces__msg__ColorFlag__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_interfaces
void
color_interfaces__msg__ColorFlag__destroy(color_interfaces__msg__ColorFlag * msg);


/// Initialize array of msg/ColorFlag messages.
/**
 * It allocates the memory for the number of elements and calls
 * color_interfaces__msg__ColorFlag__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_interfaces
bool
color_interfaces__msg__ColorFlag__Sequence__init(color_interfaces__msg__ColorFlag__Sequence * array, size_t size);

/// Finalize array of msg/ColorFlag messages.
/**
 * It calls
 * color_interfaces__msg__ColorFlag__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_interfaces
void
color_interfaces__msg__ColorFlag__Sequence__fini(color_interfaces__msg__ColorFlag__Sequence * array);

/// Create array of msg/ColorFlag messages.
/**
 * It allocates the memory for the array and calls
 * color_interfaces__msg__ColorFlag__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_color_interfaces
color_interfaces__msg__ColorFlag__Sequence *
color_interfaces__msg__ColorFlag__Sequence__create(size_t size);

/// Destroy array of msg/ColorFlag messages.
/**
 * It calls
 * color_interfaces__msg__ColorFlag__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_color_interfaces
void
color_interfaces__msg__ColorFlag__Sequence__destroy(color_interfaces__msg__ColorFlag__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__FUNCTIONS_H_
