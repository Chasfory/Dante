/*
** EPITECH PROJECT, 2021
** my_put_S
** File description:
** p
*/

#include "my.h"

int my_put_octal(int nb);

int my_put_s(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            my_put_octal(str[i]);
        }
        else
            my_putchar(str[i]);
        i = i + 1;
    }
}
