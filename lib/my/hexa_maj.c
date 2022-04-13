/*
** EPITECH PROJECT, 2021
** hexa
** File description:
** hexa
*/

#include "my.h"

int my_put_hexa_maj(unsigned int nb)
{
    int x;

    if (nb >= 16) {
        x = nb % 16;
        nb = nb / 16;
        my_put_hexa_maj(nb);
    }
    else if (nb > 0) {
        x = nb % 16;
        nb = nb / 16;
    }
    if (nb > 9)
        my_putchar(x + 55);
    if (nb <= 9)
        my_putchar(x + 48);
}
