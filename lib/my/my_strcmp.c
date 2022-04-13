/*
** EPITECH PROJECT, 2020
** strcmp
** File description:
** f
*/

int my_strcmp(char const *s1, char const *s2)
{
    int x = 0;

    while (s1[x] != '\0' && s2[x] != '\0') {
        if (s2[x] != s1[x])
            break;
        x = x + 1;
    }
    return (s1[x] - s2[x]);
}
