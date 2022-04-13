/*
** EPITECH PROJECT, 2021
** p
** File description:
** p
*/

#include "my.h"

int alphanum(char c)
{
    if (c != '\n' && c != '\0')
        return (1);
    return (0);
}

int len_word(char const *str)
{
    int len = 0;

    for (int x = 0; alphanum(str[x]) == 1; x++, len++);
    return (len);
}

int word_count(char const *str)
{
    int x = 0;

    for (int y = 0; str[y]; y++) {
        if (alphanum(str[y]) == 1 && alphanum(str[y + 1]) == 0)
            x++;
    }
    return (x);
}

char **my_str_to_word_array(char const *str)
{
    int x = 0;
    int z = 0;
    int total_word = word_count(str);
    char **tab = malloc(sizeof(char *) * (total_word + 1));

    for (int y = 0; x < total_word; x++) {
        for (; alphanum(str[y]) == 0; y++);
        z = len_word(&str[y]);
        tab[x] = malloc(sizeof(char) * (z + 1));
        tab[x] = my_strncpy(tab[x], &str[y], z);
        tab[x][z] = '\0';
        y += z;
    }
    tab[x] = NULL;
    return (tab);
}