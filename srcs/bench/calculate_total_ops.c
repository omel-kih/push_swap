#include "bench.h"

int calculate_total_ops(t_bench *bench)
{
    int total_ops;

    total_ops = bench->sa + bench->sb + bench->ss
        + bench->pa + bench->pb
        + bench->ra + bench->rb + bench->rr
        + bench->rra + bench->rrb + bench->rrr;
    return (total_ops);
}
