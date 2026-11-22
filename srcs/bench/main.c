#include <stdio.h>
#include <unistd.h>
#include "bench.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}


int main ()
{  

	t_bench bench = {0};
	t_options stgs = {0};

	stgs.strategy = 2;
	bench.sa = 2;
	bench.sb = 1;
	bench.pa = 5;
	bench.pb = 5;
	bench.ra = 2;
	bench.rb = 1;	
	bench.rra = 1;
	int numbers[] = {1, 9, 7};

	print_benchmark(&bench , &stgs , numbers , 3);
	




	// int numbers[] = {1, 2, 3};

	// float res = calculate_disorder(numbers , 3);
	// printf("%.1f%%\n" , res * 100);
    // // int bench = 0;
	// // int i = 1;
	// // while (argv[i])
	// // {
	// // 	if (ft_strncmp(argv[i] , "--bench" , 7) == 0)
	// // 		bench += 1;
	// // 	i++;
	// // }
	// // if (bench == 1)
	// // 	printf("succes --bench");
	// // else
	// // 	printf("error");
}
