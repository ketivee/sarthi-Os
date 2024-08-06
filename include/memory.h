#ifndef MEMORY_H
#define MEMORY_H

#include <stddef.h>
#include <stdint.h>

void initialize_memory(void);
void *allocate_memory(size_t size);
void free_memory(void *ptr);
void memory_management_routines(void);

#endif
