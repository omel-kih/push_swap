#include "bench.h"

static void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

static void ft_putstr_fd(char *s, int fd)
{
    int i;

    if (!s)
        return ;
    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}



static void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n > 9)
        ft_putnbr_fd((n / 10), fd);
    ft_putchar_fd((n % 10) + '0', fd);
}
static void print_disorder(int *nbs, int size)
{
    double disorder;
    double per;
    double decimal_part;
    int integer_part;
    int decimal;

    disorder = calculate_disorder(nbs, size); //0.677
    per = disorder * 100; // 67.7
    integer_part = (int)per; // 67
    
    decimal_part = per - integer_part;//67.7 - 67 = 0.7
    decimal = (int)(decimal_part * 100); // 70

    ft_putnbr_fd(integer_part, 2);
    ft_putchar_fd('.', 2);
    if (decimal < 10)
        ft_putchar_fd('0', 2);
    ft_putnbr_fd(decimal, 2);
    ft_putstr_fd("%\n", 2);
}
static void operation_counters(t_bench *bench)
{
    ft_putstr_fd("[bench] sa: ", 2);
    ft_putnbr_fd(bench->sa, 2);
    ft_putstr_fd("  sb: ", 2);
    ft_putnbr_fd(bench->sb, 2);
    ft_putstr_fd("  ss: ", 2);
    ft_putnbr_fd(bench->ss, 2);
    ft_putstr_fd("  pa: ", 2);
    ft_putnbr_fd(bench->pa, 2);
    ft_putstr_fd("  pb: ", 2);
    ft_putnbr_fd(bench->pb, 2);
    ft_putstr_fd("\n", 2);

    ft_putstr_fd("[bench] ra: ", 2);
    ft_putnbr_fd(bench->ra, 2);
    ft_putstr_fd("  rb: ", 2);
    ft_putnbr_fd(bench->rb, 2);
    ft_putstr_fd("  rr: ", 2);
    ft_putnbr_fd(bench->rr, 2);
    ft_putstr_fd("  rra: ", 2);
    ft_putnbr_fd(bench->rra, 2);
    ft_putstr_fd("  rrb: ", 2);
    ft_putnbr_fd(bench->rrb, 2);
    ft_putstr_fd("  rrr: ", 2);
    ft_putnbr_fd(bench->rrr, 2);
    ft_putstr_fd("\n", 2);
}
void print_benchmark(t_bench *bench, t_options *parss,int *nbs, int size)
{
    ft_putstr_fd("[bench] disorder :", 2);
    print_disorder(nbs , size);
    if (parss->strategy == 1)
        ft_putstr_fd("[bench] strategy : Simple / O(n * n) \n", 2);
    else if (parss->strategy == 2)
        ft_putstr_fd("[bench] strategy : Medium / O(n√n)  \n", 2);
    else if (parss->strategy == 3)
        ft_putstr_fd("[bench] strategy : Complex / O(n log n) \n", 2);
    else
        ft_putstr_fd("[bench] Adaptive / O(n√n) \n", 2);

    ft_putstr_fd("[bench] total_ops : ", 2);
    ft_putnbr_fd(calculate_total_ops(bench), 2);
    ft_putstr_fd("\n" , 2);
    operation_counters(bench);
}