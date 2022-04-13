/*
** EPITECH PROJECT, 2021
** memset
** File description:
** p
*/

char *my_memset(char *s, char c, int size)
{
    int   i;

    i = 0;
    while (i < size)
        s[i++] = c;
    return (s);
}
