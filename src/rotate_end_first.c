/*
** EPITECH PROJECT, 2021
** rotate
** File description:
** rotate_end_first
*/

#include "my.h"

void rotate_ra(list_t *l_a)
{
    node_t *tmp = l_a->end;
    node_t *scd = tmp->prev;

    if (find_length(l_a) > 2) {
        scd->next = NULL;
        tmp->prev = NULL;
        tmp->next = l_a->begin;
        tmp->next->prev = tmp;
        l_a->begin = tmp;
        l_a->end = scd;
    } else
        my_swap(&l_a->end->data, &l_a->begin->data);
    write(1, "rra ", 5);
}

void rotate_rb(list_t *l_b)
{
    node_t *tmp = l_b->end;
    node_t *scd = tmp->prev;

    if (find_length(l_b) > 2) {
        scd->next = NULL;
        tmp->prev = NULL;
        tmp->next = l_b->begin;
        tmp->next->prev = tmp;
        l_b->begin = tmp;
        l_b->end = scd;
    } else
        my_swap(&l_b->end->data, &l_b->begin->data);
    write(1, "rrb ", 5);
}

void rotate_rr(list_t *l_a, list_t *l_b)
{
    rotate_ra(l_a);
    rotate_rb(l_b);
    write(1, "rrr ", 5);
}
