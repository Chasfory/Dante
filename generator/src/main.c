/*
** EPITECH PROJECT, 2021
** generator
** File description:
** dante
*/

#include "generator.h"

void imp_fuction(generator_t *gen, char **av, int ac)
{
    gen->x = my_getnbr(av[1]);
    gen->y = my_getnbr(av[2]);
    gen->compt = 0;
    if (ac == 4)
        gen->compt = 1;
}

int main(int ac, char **av)
{
    generator_t *gen = malloc(sizeof(generator_t));

    if (error(ac, av) == 84)
        return 84;
    imp_fuction(gen, av, ac);
    map(gen);
    return (0);
}