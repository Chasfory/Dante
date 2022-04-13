/*
** EPITECH PROJECT, 2020
** generator.h
** File description:
** dante
*/

#ifndef GENERATOR_H
#define GENERATOR_H

#include "my.h"
#include <time.h>

typedef struct generator_t
{
    int x;
    int y;
    int compt;
    char **map;
}generator_t;

void map(generator_t *gen);
int error(int ac, char **av);

#endif /* !GENERATOR_H */