/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** reverses a string
*/

char *my_revstr(char *str)
{
    int x = 0;
    int y = 0;
    int temp;

    while (str[x] != '\0')
        x = x + 1;
    x = x - 1;
    while (x >= y) {
        temp = str[y];
        str[y] = str[x];
        str[x] = temp;
        x = x - 1;
        y = y + 1;
    }
    return (str);
}
