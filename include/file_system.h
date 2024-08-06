#ifndef FILE_SYSTEM_H
#define FILE_SYSTEM_H

#include <stddef.h>
#include <stdint.h>

void setup_user_directories(void);
void create_directory(const char *path);
void protect_system_directories(void);
void lock_directory(const char *path);

#endif
