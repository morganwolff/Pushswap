/*
** EPITECH PROJECT, 2021
** my
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <dirent.h>
    #include <stdarg.h>
    #include <stdbool.h>

typedef struct node_s {
    int data;
    struct node_s *next;
    struct node_s *prev;
}node_t;

typedef struct list_s {
    node_t *begin;
    node_t *end;
    int length;
}list_t;

void my_putchar(char c);
int my_getnbr(char const *str);
void my_put_nbr(int nb);
int my_putstr(char *str);
char *my_revstr(char *str);
void my_swap(int *a, int *b);
void my_printf(char *src, ...);

node_t *init_node(int data);
list_t *init_list(void);
list_t *my_params_to_list(int ac, char *const *av);
void my_put_in_list(list_t *list, int data);
void display_list(list_t *list);

int find_min(list_t *l_a);
int find_length(list_t *l_a);
int find_pos_min(list_t *l_a, int min);
void algo(list_t *l_a, list_t *l_b);

void swap_a(list_t *l_a);
void swap_b(list_t *l_b);
void sswap_c(list_t *l_a, list_t *l_b);
void push_a(list_t **l_a, list_t **l_b);
void push_end_a(list_t **l_a, list_t **l_b);
void push_b(list_t **l_a, list_t **l_b);
void rotate_a(list_t *l_a);
void rotate_b(list_t *l_b);
void rotate_r(list_t *l_a, list_t *l_b);
void rotate_ra(list_t *l_a);
void rotate_rb(list_t *l_b);
void rotate_rr(list_t *l_a, list_t *l_b);

#endif
