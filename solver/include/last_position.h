/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** last_position
*/

#ifndef LAST_POSITION_H_
#define LAST_POSITION_H_

#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

typedef struct pos_s {
    int x;
    int y;
} pos_t;

typedef struct last_position_s {
    pos_t *array;
    size_t alloc_size;
    size_t size;
} last_position_t;

void array_pop(last_position_t *array, size_t n);
int array_add(last_position_t *array, const pos_t *pos);
void array_destroy(last_position_t *array);
int array_create(last_position_t *array, size_t init_size);

#endif /* !LAST_POSITION_H_ */