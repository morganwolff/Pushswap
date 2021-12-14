/*
** EPITECH PROJECT, 2021
** my_put_in_list
** File description:
** my_put_in_list
*/

#include "my.h"

void my_put_in_list(list_t *list, int data)
{
    node_t *new_node = init_node(data);

    if (list->begin == NULL) {
        list->begin = new_node;
        list->end = new_node;
    } else {
        list->end->next = new_node;
        list->end->next->prev = list->end;
        new_node->prev = list->end;
        list->end = new_node;
    }
    list->length++;
}
