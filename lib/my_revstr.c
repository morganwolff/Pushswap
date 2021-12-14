/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int len = 0;
    int tmp = 0;

    for (; str[len] != '\0'; len++);
    len -= 1;
    for (; i < len; i++, len--) {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
    }
    return (str);
}
