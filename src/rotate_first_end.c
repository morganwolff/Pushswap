/*
** EPITECH PROJECT, 2021
** rotate
** File description:
** rotate_first_end
*/

#include "my.h"

void rotate_a(list_t *l_a)
{
    node_t *tmp = l_a->begin;
    node_t *scd = tmp->next;

    if (find_length(l_a) > 2) {
        scd->prev = NULL;
        tmp->next = NULL;
        tmp->prev = l_a->end;
        tmp->prev->next = tmp;
        l_a->end = tmp;
        l_a->begin = scd;
    } else
        my_swap(&l_a->end->data, &l_a->begin->data);
    write(1, "ra ", 4);
}

void rotate_b(list_t *l_b)
{
    node_t *tmp = l_b->begin;
    node_t *scd = tmp->next;

    if (find_length(l_b) > 2) {
        scd->prev = NULL;
        tmp->next = NULL;
        tmp->prev = l_b->end;
        tmp->prev->next = tmp;
        l_b->end = tmp;
        l_b->begin = scd;
    } else
        my_swap(&l_b->end->data, &l_b->begin->data);
    write(1, "rb ", 4);
}

void rotate_r(list_t *l_a, list_t *l_b)
{
    rotate_a(l_a);
    rotate_b(l_b);
    write(1, "rr ", 4);
}
