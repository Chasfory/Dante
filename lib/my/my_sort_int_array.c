/*
** EPITECH PROJECT, 2020
** sortintarray
** File description:
** f
*/

#include "my.h"

int my_sort_int_array_swap(int x, int **a, int y)
{
    if (*a[y + 1] < *a[y]) {
        x = *a[y];
        *a[y] = *a[y + 1];
        *a[y + 1] = x;
    }
    return (x);
}

void my_sort_int_array(int *tab, int size)
{
    int x = 0;

    if (tab == NULL)
        return;
    for (int y = 0; y < size; y++) {
        for (int v = 0; v < size; v++)
            x = my_sort_int_array_swap(x, &tab, v);
    }
}
