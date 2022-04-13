/*
** EPITECH PROJECT, 2021
** getnbr
** File description:
** return a number sent to the function as a string
*/

int my_getnbr(char const *str)
{
    int nb = 0;
    int n = 1;
    int i = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            n *= -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return (nb * n);
        nb = (nb * 10 + (str[i] - 48));
        i++;
        if (nb < 0 && nb != -2147483648 && n == -1 || nb < 0 && n != -1)
            return 0;
    }
    return (nb * n);
}
