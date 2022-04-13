/*
** EPITECH PROJECT, 2021
** strlen
** File description:
** counts and return the number of character found in the string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
