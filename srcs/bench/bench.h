#ifndef BENCH_H
# define BENCH_H


# include <stddef.h>
# include <stdlib.h>
#include <unistd.h>
typedef struct s_bench
{
    double disorder;
    int total_ops;
    int sa;
    int sb;
    int ss;
    int pa;
    int pb;
    int ra;
    int rb;
    int rr;
    int rra;
    int rrb;
    int rrr;
}   t_bench;

typedef struct s_options
{
	int	strategy;
	int	benchmark;
}		t_options;

int calculate_total_ops(t_bench *bench);
double calculate_disorder(int *numbers, int size);
void print_benchmark(t_bench *bench, t_options *parss,int *nbs, int size);
#endif