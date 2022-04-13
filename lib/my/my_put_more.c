/*
** EPITECH PROJECT, 2021
** p
** File description:
** p
*/

#include "../include/my.h"

int my_put_more(int nb)
{
    if (nb > 0)
        my_putstr("%+");
    else
        my_putchar('%');
}
