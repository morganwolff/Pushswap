/*
** EPITECH PROJECT, 2021
** push
** File description:
** push
*/

#include "my.h"

void push_a(list_t **l_a, list_t **l_b)
{
    node_t *tmp = (*l_b)->begin;
    node_t *tmp2 = malloc(sizeof(node_t));

    if (tmp->next != NULL) {
        (*l_b)->begin = (*l_b)->begin->next;
        (*l_b)->begin->prev = NULL;
        tmp->next = (*l_a)->begin;
        (*l_a)->begin->prev = tmp;
        (*l_a)->begin = (*l_a)->begin->prev;
        my_printf("pa ");
    } else if (tmp != NULL && tmp->next == NULL) {
        (*l_a)->begin->prev = tmp2;
        tmp2->data = (*l_b)->begin->data;
        tmp2->next = (*l_a)->begin;
        tmp2->prev = NULL;
        (*l_a)->begin = tmp2;
        (*l_b)->begin = NULL;
        write(1, "pa ", 4);
    }
}

void push_b(list_t **l_a, list_t **l_b)
{
    node_t *tmp = (*l_a)->begin;

    (*l_a)->begin = (*l_a)->begin->next;
    (*l_a)->begin->prev = NULL;
    tmp->next = (*l_b)->begin;
    if ((*l_b)->begin != NULL) {
        (*l_b)->begin->prev = tmp;
        (*l_b)->begin = (*l_b)->begin->prev;
    } else {
        (*l_b)->begin = tmp;
        (*l_b)->end = tmp;
    }
    write(1, "pb ", 4);
}
