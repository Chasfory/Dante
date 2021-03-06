/*
** EPITECH PROJECT, 2021
** strncat
** File description:
** concatenates n characters of the src string to the end of the dest string
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, const char *src, int nb)
{
    int dest_len = my_strlen(dest);
    int i = 0;

    while (i < nb && src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest);
}
