/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "my.h"

void my_put_nbr(int nb)
{
    int div = 1;
    int res = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    for (; nb / div >= 10; div = div * 10);
    for (; div > 0; div = div * 0.1) {
        res = ((nb / div)% 10);
        my_putchar(res + 48);
    }
}
