/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** pushswap
*/

#include "my.h"

bool list_is_sort(list_t *l_a)
{
    node_t *tmp = l_a->begin;

    for (; tmp != NULL && tmp->next != NULL; tmp = tmp->next) {
        if (tmp->data > tmp->next->data)
            return (false);
    }
    return (true);
}

int main(int ac, char **av)
{
    list_t *l_a = init_list();
    list_t *l_b = init_list();

    for (int i = 1; i < ac; i++) {
        my_put_in_list(l_a, my_getnbr(av[i]));
    }
    if (ac < 2) {
        write(2, "Invalid args\n", 13);
        return (84);
    } else if (ac == 2)
        my_printf("\n");
    else {
        if (list_is_sort(l_a) == true)
            my_printf("\n");
        else
            algo(l_a, l_b);
    }
    free(l_a);
    free(l_b);
    return (0);
}