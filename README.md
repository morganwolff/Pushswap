Pushswap
========

Epitech Project Tech 1

The game is made up of two lists of numbers named l_a and l_b.<br>
In the beginning, l_b will be empty and l_a will contain a certain amount of positive or negative numbers.<br>
The objective of the game is to sort l_a.<br>
To do so, we only have the following operations :

• sa : swaps the first two elements of l_a
(nothing will happen if there aren’t enough elements)<br>
• sb : swaps the first two elements of l_a
(nothing will happen if there aren’t enough elements)<br>
• sc : sa and sb at the same time.<br>
• pa : take the first element from l_b and move it to the first position on the l_a list (nothing will happen if l_b is empty).<br>
• pb : take the first element from l_a and move it to the first position on the l_a list (nothing will happen if l_b is empty).<br>
• ra : rotate l_a toward the beginning, the first element will become the last.<br>
• rb : rotate l_b toward the beginning, the first element will become the last.<br>
• rr : ra and rb at the same time.<br>
• rra : rotate l_a toward the end, the last element will become the first.<br>
• rrb : rotate l_b toward the end, the last element will become the first.<br>
• rrr : rra and rrb at the same time.<br>

You must create a program in which l_a is given as parameter (all numbers are valid and can fit in an integer).<br>
The goal is to sort the list by using the fewest possible operations.<br>
The program must print the series of operations that enable this list to be sorted.<br>

The Program
========
./push_swap [l_a]

Example
========
./push_swap 9 5 1 10 4 3

ra ra pb ra ra pb rra pb ra pb ra pb pa pa pa pa pa

==>1 3 4 5 9 10 