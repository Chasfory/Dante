/*
** EPITECH PROJECT, 2020
** put_nbr
** File description:
** f
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb < 10) {
        my_putchar(nb + 48);
    }
    else if (nb >= 10) {
        my_put_nbr(nb / 10);
        nb = nb % 10;
        my_putchar(nb + 48);
    }
    return (0);
}
