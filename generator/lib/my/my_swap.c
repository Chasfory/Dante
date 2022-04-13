/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** swap the content of two integers
*/

#include "my.h"

void my_swap(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}
