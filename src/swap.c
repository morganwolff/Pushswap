/*
** EPITECH PROJECT, 2021
** swap
** File description:
** swap
*/

#include "my.h"

void swap_a(list_t *l_a)
{
    if (l_a->begin == NULL && l_a->begin->next == NULL) return;
    my_swap(&l_a->begin->data, &l_a->begin->next->data);
    my_putstr("sa ");
}

void swap_b(list_t *l_b)
{
    if (l_b->begin == NULL && l_b->begin->next == NULL) return;
    my_swap(&l_b->begin->data, &l_b->begin->next->data);
    my_putstr("sb ");
}

void swap_c(list_t *l_a, list_t *l_b)
{
    swap_a(l_a);
    swap_b(l_b);
    my_printf("sc");
}