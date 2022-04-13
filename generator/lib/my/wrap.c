/*
** EPITECH PROJECT, 2021
** p
** File description:
** p
*/

#include "my.h"
#include <stdarg.h>

int my_put_nbr_unsigned(unsigned int nb);

void wrap_char_percent(va_list x)
{
    my_putchar('%');
}

void wrap_char(va_list x)
{
    my_putchar((char) va_arg(x, int));
}

void wrap_str(va_list x)
{
    my_putstr(va_arg(x, char *));
}

void wrap_nbr(va_list x)
{
    my_put_nbr(va_arg(x, int));
}

void wrap_unsigned(va_list x)
{
    my_put_nbr_unsigned(va_arg(x, unsigned int));
}
