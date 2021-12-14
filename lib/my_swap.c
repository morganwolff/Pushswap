/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** my_swap
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}