/*
** EPITECH PROJECT, 2021
** binaire
** File description:
** p
*/

#include "my.h"

#include <stdio.h>

int my_put_binaire(unsigned int nb)
{
    int x;

    if (nb >= 2) {
        x = nb % 2;
        nb = nb / 2;
        my_put_binaire(nb);
    }
    else if (nb > 0) {
        x = nb % 2;
        nb = nb / 2;
    }
    my_putchar(x + 48);
}
