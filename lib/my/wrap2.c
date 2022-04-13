/*
** EPITECH PROJECT, 2021
** p
** File description:
** p
*/

#include "my.h"
#include <stdarg.h>

int my_put_octal(unsigned int nb);
int my_put_nbr_base(char const *base, unsigned int nb);
int my_put_s(char *str);
int my_put_binaire(unsigned int nb);
int my_put_hexa_maj(unsigned int nb);

void wrap_octal(va_list x)
{
    my_put_nbr_base("01234567", va_arg(x, unsigned int));
}

void wrap_hexa(va_list x)
{
    my_put_nbr_base("0123456789abcdef", va_arg(x, unsigned int));
}

void wrap_s(va_list x)
{
    my_put_s(va_arg(x, char *));
}

void wrap_binaire(va_list x)
{
    my_put_binaire(va_arg(x, unsigned int));
}

void wrap_hexa_maj(va_list x)
{
    my_put_nbr_base("0123456789ABCDEF", va_arg(x, unsigned int));
}
