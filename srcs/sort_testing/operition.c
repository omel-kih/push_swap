#include "push_swap.h"

void    sa(t_stack *a)
{
    int tmp ;
    if (a->size <= 1)
        return;
    tmp = a->data[a->head];
    a->data[a->head] = a->data[(a->head + 1) % a->capacity];
    a->data[(a->head + 1) % a->capacity] = tmp;
}
void    sb(t_stack *b)
{
    int tmp;

    if (b->size <= 1)
        return;
    tmp = b->data[b->head];
    b->data[b->head] = b->data[(b->head + 1) % b->capacity];
    b->data[(b->head + 1) % b->capacity] = tmp;
}
void ss(t_stack *a , t_stack *b)
{
    sa(a);
    sb(b);
}
void pa(t_stack *a, t_stack *b)
{
    int tmp;
    if (b->size == 0 || a->size == a->capacity)
        return;
    tmp = b->data[b->head];
    a->head = (a->head - 1 + a->capacity) % a->capacity;
    a->data[a->head] = tmp;
    b->size -= 1;
    a->size += 1;
    b->head = (b->head + 1) % b->capacity;
}
void pb(t_stack *a, t_stack *b)
{
    int tmp;
    if (a->size == 0 || b->size == b->capacity)
        return;
    tmp = a->data[a->head];
    b->head = (b->head - 1 + b->capacity) % b->capacity;
    b->data[b->head] = tmp;
    a->size -= 1;
    b->size += 1;
    a->head = (a->head + 1) % a->capacity;
}
