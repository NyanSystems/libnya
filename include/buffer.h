//
// Created by Sokhibjon Orzikulov on 24/01/24.
//

/**
 * @file buffer.h
 *
 * @brief Buffer implementation in C
 * @brief C da buffer implementatsiyasi
 *
 * @author Sokhibjon Orzikulov
 * @license MIT
 */

#ifndef BUFFER_H
#define BUFFER_H

#include <stddef.h>
#include <stdint.h>

#define BUFFER_REALLOC_AMOUNT 2000
struct buffer {
  char *data;
  // Read index
  int rindex;
  int len;
  int msize;
};

struct buffer *buffer_create();

char buffer_read(struct buffer *buffer);
char buffer_peek(struct buffer *buffer);

void buffer_extend(struct buffer *buffer, size_t size);
void buffer_printf(struct buffer *buffer, const char *fmt, ...);
void buffer_printf_no_terminator(struct buffer *buffer, const char *fmt, ...);
void buffer_write(struct buffer *buffer, char c);
void *buffer_ptr(struct buffer *buffer);
void buffer_free(struct buffer *buffer);

#endif // BUFFER_H
