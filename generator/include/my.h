/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** contains the prototypes
*/

#ifndef MY_H
#define MY_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct my_struct
{
    char print;
    void (*ptf)(va_list);
}my_struct;

void    wrap_char(va_list x);
void    wrap_char_percent(va_list x);
void    wrap_str(va_list x);
void    wrap_nbr(va_list x);
void    wrap_unsigned(va_list x);
void    wrap_octal(va_list x);
void    wrap_hexa(va_list x);
void    wrap_s(va_list x);
void    wrap_binaire(va_list x);
void    wrap_hexa_maj(va_list x);
void    wrap_pointer(va_list x);
void    my_putchar(char c);
char    *my_strstr(char *str, char const *to_find);
int     my_isneg(int n);
int     my_strcmp(char const *s1, char const *s2);
int     my_put_nbr(int nb);
int     my_strncmp(char const *s1, char const *s2, int n);
void    my_swap(char **a, char **b);
char    *my_strupcase(char *str);
int     my_putstr(char const *str);
char    *my_strlowcase(char *str);
int     my_strlen(char const *str);
char    *my_strcapitalize(char *str);
int     my_getnbr(char const *str);
int     my_str_isalpha(char const *str);
void    my_sort_int_array(int *tab, int size);
int     my_str_isnum(char const *str);
int     my_compute_power_it(int nb, int p);
int     my_compute_power_rec(int nb, int p);
int     my_str_islower(char const *str);
int     my_compute_square_root(int nb);
int     my_str_isupper(char const *str);
int     my_is_prime(int nb);
int     my_str_isprintable(char const *str);
int     my_find_prime_sup(int nb);
int     my_showstr(char const *str);
char    *my_strcpy(char *dest, char const *src);
int     my_showmem(char const *str, int size);
char    *my_strncpy(char *dest, char const *src, int n);
char    *my_strcat(char *dest, char const *src);
char    *my_revstr(char *str);
char    *my_strncat(char *dest, char const *src, int nb);
char    *my_memset(char *str, int a, int n);
char    *my_strdup(char  const *src);
int     my_show_word_array(char * const *tab);
char    **my_str_to_word_array(char const *str);
void    wrap_char(va_list x);
void    wrap_char_percent(va_list x);
void    wrap_str(va_list x);
void    wrap_nbr(va_list x);
void    wrap_unsigned(va_list x);
void    wrap_octal(va_list x);
void    wrap_hexa(va_list x);
void    wrap_s(va_list x);
void    wrap_binaire(va_list x);
void    wrap_hexa_maj(va_list x);
void    wrap_pointer(va_list x);
int     my_printf(char const *fmt, ...);

#endif /* !MY_H */
