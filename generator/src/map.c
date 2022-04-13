/*
** EPITECH PROJECT, 2021
** generator
** File description:
** map
*/

#include "generator.h"

#include "generator.h"

void print_map_two(generator_t *gen)
{
    for (int i = 0; i < gen->x; i++)
        gen->map[gen->y - 1][i] = '*';
    gen->map[gen->y - 1][gen->x] = '\0';
    my_putstr(gen->map[gen->y - 1]);
}

void print_map(generator_t *gen)
{
    if (gen->y % 2 == 0)
        for (int i = 0; i < gen->x; i++) {
            gen->map[gen->y - 2][i] = 'X';
            if (i % 2 == 0)
                gen->map[gen->y - 2][i] = '*';
        }
    for (int i = 0; i < gen->y - 1; i++) {
        if (gen->x % 2 == 0)
            i % 2 == 0 ? (gen->map[i][gen->x - 2] = '*') :
                (gen->map[i][gen->x - 2] = 'X');
        if (gen->compt == 0)
            gen->map[gen->y - 2][gen->x - 2] = '*';
        else
            gen->map[gen->y - 2][gen->x - 2] = 'X';
        gen->map[i][gen->x - 1] = '*';
        gen->map[i][gen->x] = '\0';
        my_printf("%s\n", gen->map[i]);
    }
    print_map_two(gen);
}

void check_charact(generator_t *gen, int i, int j)
{
    gen->map[i][j] = '*';
    if (rand() % 2 == 0) {
        gen->map[i + 1][j] = 'X';
        gen->map[i][j + 1] = '*';
    }
    else {
        gen->map[i][j + 1] = 'X';
        gen->map[i + 1][j] = '*';
    }
    gen->map[i + 1][j + 1] = 'X';
}

void map(generator_t *gen)
{
    gen->map = malloc(sizeof(char *) * (gen->y + 1));
    for (int i = 0; i < gen->y; i++)
        gen->map[i] = malloc(sizeof(char) * (gen->x + 1));
    srand(time(NULL));
    for (int i = 0; i < gen->y; i += 2)
        for (int j = 0; j < gen->x; j += 2)
            check_charact(gen, i, j);
    print_map(gen);
}