/*
** EPITECH PROJECT, 2021
** my_params_to_list
** File description:
** my_params_to_list
*/

#include "my.h"

list_t *my_params_to_list(int ac, char *const *av)
{
    list_t *l_a = init_list();

    for (int i = 1; i < ac; i++) {
        my_put_in_list(l_a, my_getnbr(av[i]));
    }
    return (l_a);
}
