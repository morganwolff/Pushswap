/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf
*/

#include "my.h"

int index_flags(char c, char *str)
{
    int i = 0;
    while ((c != str[i]) && (str[i] != '\0')) {
        i++;
    }
    return (i);
}

void my_nbr(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void my_char(va_list list)
{
    my_putchar(va_arg(list, int));
}

void my_str(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void my_printf(char *src, ...)
{
    va_list list;
    int i = 0, ind;
    char *flags = malloc(sizeof(char) * 3);
    flags = "dics";
    char flag;
    void (*func[])(va_list list) = {my_nbr, my_nbr, my_char, my_str};

    va_start(list, src);
    for (; src[i] != '\0'; i++) {
        if (src[i] == '%') {
            flag = src[i + 1];
            ind = index_flags(flag, flags);
            func[ind](list);
            ind = 0;
        } else if (src[i] != '%' && src[i - 1] != '%')
            my_putchar(src[i]);
    }
    va_end(list);
}