/*
** EPITECH PROJECT, 2021
** display_list
** File description:
** display_list
*/

#include "my.h"

void display_list(list_t *list)
{
    node_t *tmp = list->begin;
    while (tmp != NULL) {
        my_printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    my_printf("\n");
}
