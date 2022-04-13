/*
** EPITECH PROJECT, 2021
** p
** File description:
** p
*/

#include "my.h"
#include <stdarg.h>

int my_put_nbr_base(char const *base, unsigned int nb);

void wrap_pointer(va_list x)
{
    my_putstr("0x");
    my_put_nbr_base("0123456789abcdef", va_arg(x, unsigned int));
}
