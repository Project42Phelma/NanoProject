/*
 * src/allocating.h
 *
 * This file contains functions to allocate the arrays where
 * the pictures will reside.
 *
 * author: Hugues de Valon
 * mail: hugues.devalon@gmail.com
 * date: 16/07/2016
 */

#ifndef __ALLOCATING__
#define __ALLOCATING__

#include <stdint.h>

/*
 * Defines to be used in alloc_image function.
 */
#define CHAR ((size_t) 1)
#define SHORT ((size_t) 2)
#define INT ((size_t) 4)

/*
 * Allocate a two-dimensional array filled with zeroes.
 * You can precise in the arguments the size of each elements :
 * 1, 2 or 4 bytes.
 * The function returns the address of the array on success and
 * NULL on error.
 */
void **alloc_image(uint32_t lines, uint32_t columns, size_t bytes_per_element);
/*
 * Free the array containing the image.
 */
void free_image(void **image);

#endif /* __ALLOCATING__ */
