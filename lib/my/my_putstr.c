/*
** EPITECH PROJECT, 2021
** putstr
** File description:
** write a function that display 1 by 1 the characters of a string
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
