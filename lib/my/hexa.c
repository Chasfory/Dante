/*
** EPITECH PROJECT, 2021
** hexa
** File description:
** hexa
*/

#include "my.h"

int my_put_nbr_base(char const *base, unsigned int nb)
{
    if (nb >= my_strlen(base)) {
        my_put_nbr_base(base, nb / my_strlen(base));
    }
    my_putchar(base[nb % my_strlen(base)]);
}
