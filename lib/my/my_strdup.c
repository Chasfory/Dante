/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** p
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *temp = malloc(sizeof(char) * my_strlen(src)+ 1);
    int i;
    for (i = 0; i != my_strlen(src); i++) {
        temp[i] = src[i];
    }
    temp[i] = '\0';
    return (temp);
}
