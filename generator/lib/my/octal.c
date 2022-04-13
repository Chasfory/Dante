/*
** EPITECH PROJECT, 2021
** p
** File description:
** p
*/

#include "my.h"

int my_put_octal(unsigned int nb)
{
    int x;

    if (nb >= 8) {
        x = nb % 8;
        nb = nb / 8;
        my_put_octal(nb);
    }
    else if (nb > 0) {
        x = nb % 8;
        nb = nb / 8;
    }
    my_putchar(x + 48);
}
