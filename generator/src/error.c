/*
** EPITECH PROJECT, 2021
** generator
** File description:
** dante
*/

#include "generator.h"

int error(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return 84;
    if (ac == 4 && my_strcmp(av[3], "perfect") != 0)
        return 84;
    return 0;
}