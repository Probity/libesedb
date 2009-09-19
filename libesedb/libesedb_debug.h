/*
 * Debug functions
 *
 * Copyright (c) 2008-2009, Joachim Metz <forensics@hoffmannbv.nl>,
 * Hoffmann Investigations. All rights reserved.
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBESEDB_DEBUG_H )
#define _LIBESEDB_DEBUG_H

#include <common.h>
#include <types.h>

#include <liberror.h>

#include "libesedb_libbfio.h"

#if defined( __cplusplus )
extern "C" {
#endif

#if defined( HAVE_DEBUG_OUTPUT )

void libesedb_debug_print_database_state(
      uint32_t database_state );

void libesedb_debug_print_page_flags(
      uint32_t page_flags );

void libesedb_debug_print_page_value_definition_type(
      uint16_t page_value_definition_type );

void libesedb_debug_print_page_tag_flags(
      uint8_t page_tag_flags );

void libesedb_debug_print_column_type(
      uint32_t column_type );

void libesedb_debug_print_column_group_of_bits(
      uint32_t column_group_of_bits );

void libesedb_debug_print_index_group_of_bits(
      uint32_t index_group_of_bits );

int libesedb_debug_print_log_time(
     uint8_t *log_time,
     size_t log_time_size,
     const char *description,
     const char *indentation,
     liberror_error_t **error );

int libesedb_debug_print_read_offsets(
     libbfio_handle_t *file_io_handle,
     liberror_error_t **error );

#endif

#if defined( __cplusplus )
}
#endif

#endif
