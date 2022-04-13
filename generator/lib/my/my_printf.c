/*
** EPITECH PROJECT, 2021
** printf
** File description:
** my_printf
*/

#include "my.h"
#include <stdarg.h>

static const my_struct pf[12] = {
    {'s', &wrap_str},
    {'c', &wrap_char},
    {'d', &wrap_nbr},
    {'i', &wrap_nbr},
    {'%', &wrap_char_percent},
    {'u', &wrap_unsigned},
    {'o', &wrap_octal},
    {'x', &wrap_hexa},
    {'X', &wrap_hexa_maj},
    {'b', &wrap_binaire},
    {'S', &wrap_s},
    {'p', &wrap_pointer},
};

void my_table_pointer(char x, va_list y)
{
    int i = 0;

    while (i < 12) {
        if (pf[i].print == x) {
            pf[i].ptf(y);
            return;
        }
        i = i + 1;
    }
}

int my_printf(char const *fmt, ...)
{
    int x = 0;
    va_list ap;

    va_start(ap, fmt);
    while (fmt[x]) {
        if (fmt[x] == '%') {
            my_table_pointer(fmt[x + 1], ap);
            x = x + 1;
        }
        else
            my_putchar(fmt[x]);
        x = x + 1;
    }
    return (0);
}
