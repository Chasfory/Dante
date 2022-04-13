/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** last_position
*/

#include "last_position.h"

int array_create(last_position_t *array, size_t init_size)
{
    array->array = malloc(sizeof(pos_t) * init_size);
    if (array->array == NULL)
        return -1;
    array->alloc_size = init_size;
    array->size = 0;
    return 0;
}

void array_destroy(last_position_t *array)
{
    free(array->array);
}

int array_add(last_position_t *array, const pos_t *pos)
{
    pos_t *temp;
    size_t new_size;

    if (array->size == array->alloc_size) {
        new_size = array->alloc_size * 2;
        temp = malloc(sizeof(pos_t) * new_size);
        if (temp == NULL)
            return -1;
        for (size_t i = 0; i < array->size; ++i) {
            temp[i] = array->array[i];
        }
        free(array->array);
        array->array = temp;
        array->alloc_size = new_size;
    }
    array->array[array->size] = *pos;
    array->size += 1;
    return 0;
}

void array_pop(last_position_t *array, size_t n)
{
    if (array->size < n) {
        return;
    }
    array->size -= n;
}