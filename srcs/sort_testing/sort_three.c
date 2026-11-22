#include <push_swap.h>

void sort_three(t_stack *a)
{
    int first ;
    int second ;
    int third;
    int tmp;

    first = a->data[a->head];
    second = a->data[(a->head + 1) % a->capacity];
    third  = a->data[(a->head + 2) % a->capacity];
    if (first < second && second < third)
        return;
    if (first > second && second < third)
        sa(a);
    
}
