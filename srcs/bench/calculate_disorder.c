#include "bench.h"

double calculate_disorder(int *numbers, int size)
{
    int i = 0;
    int j = 0;
    int mis = 0;
    int total_pairs = 0;

    if (size < 2)
        return (0);
    while (i < size)
    {
        j = i+  1;
        while (j < size)
        {
            if (numbers[j] < numbers[i])
                mis += 1;
            j++;
        }
        i++;
    }
    total_pairs = ((size * size) - (size * 1)) / 2;
    return ((double)mis / total_pairs);
}
