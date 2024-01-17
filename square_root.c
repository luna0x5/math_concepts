#include "math.h"

int	square_root(char *str)
{
	int	nbr;
	int	i;

	nbr = ft_atoi(str);
	i = 0;
	while (i < nbr / 2)
	{
		if (nbr == i * i)
			return (i);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!check_arguments(argv[1]) || !ft_atoi(argv[1]))
		{
			printf("invalid arguments");
			return (0);
		}
		if (!square_root(argv[1]))
			printf("your number doesn't have a square root");
		else
			printf("the square root of your number is : %d", square_root(argv[1]));
	
	}
	printf("\n");
	return(0);
}