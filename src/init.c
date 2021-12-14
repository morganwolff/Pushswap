/*
** EPITECH PROJECT, 2021
** init
** File description:
** init
*/

#include "my.h"

node_t *init_node(int data)
{
    node_t *node = malloc(sizeof(node_t));

    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return (node);
}

list_t *init_list(void)
{
    list_t *list = malloc(sizeof(list_t));

    list->begin = NULL;
    list->end = NULL;
    list->length = 0;
    return (list);
}