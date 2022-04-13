/*
** EPITECH PROJECT, 2021
** p
** File description:
** p
*/

#include "my.h"

int my_put_nbr_unsigned(unsigned int nb)
{
    if (nb < 10)
        my_putchar(nb + 48);
    else if (nb >= 10) {
        my_put_nbr(nb / 10);
        nb = nb % 10;
        my_putchar(nb + 48);
    }
    return (0);
}
