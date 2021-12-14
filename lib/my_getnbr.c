/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** my_getnbr
*/

#include "my.h"
#include <stdio.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;
    int n = 0;

    for (; str[i] != '\0' && (str[i] <= '0' || str[i] > '9'); i++)
        if (str[i] == '-')
            sign = sign * -1;
    if (str[i] == '\0')
        return (0);
    for (;(str[i] <= '9' && str[i] >= '0'); i++, n++) {
        if ((nb == 214748364 && str[i] - 48 > 7) || nb > 2147483647 || n > 10)
            return (0);
        nb = nb *10 +(str[i] - '0');
    }
    return (nb * sign);
}
