/*
** EPITECH PROJECT, 2021
** algo
** File description:
** algo
*/

#include "my.h"

int find_min(list_t *l_a)
{
    node_t *tmp = l_a->begin;
    int min = tmp->data;
    for (; tmp != NULL; tmp = tmp->next) {
        if (min > tmp->data)
            min = tmp->data;
    }
    return (min);
}

int find_pos_min(list_t *l_a, int min)
{
    int pos = 0;
    node_t *tmp = l_a->begin;

    for (; tmp != NULL && min != tmp->data; tmp = tmp->next, pos++);
    return (pos);
}

int find_length(list_t *l_a)
{
    node_t *tmp = l_a->begin;
    int len = 0;

    for (; tmp != NULL; tmp = tmp->next, len++);
    return (len);
}

void algo(list_t *l_a, list_t *l_b)
{
    node_t **tmp_a = &l_a->begin, **tmp_a_end = &l_a->begin;
    node_t **tmp_b = &l_b->begin;
    int pos = 0, len = l_a->length, min = 0;

    while ((*tmp_a)->next != NULL) {
        min = find_min(l_a);
        pos = find_pos_min(l_a, min);
        if ((l_a->length % 2) != 0)
            len = (len / 2) + 1;
        else
            len /= 2;
        if (pos <= len) {
            for (; (*tmp_a)->data != min;)
                rotate_a(l_a);
        } else if (pos >= len) {
            for (; (*tmp_a_end)->data != min;)
                rotate_ra(l_a);
        }
        push_b(&l_a, &l_b);
    }
    while (*tmp_b != NULL)
        push_a(&l_a, &l_b);
    my_printf("\n");
}
