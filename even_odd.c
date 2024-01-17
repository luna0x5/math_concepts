#include "math.h"

char	*even_odd(char *str)
{
	int	nbr;

	nbr = ft_atoi(str);
	if (nbr % 2 == 0)
		return ("EVEN NUMBER");
	else
		return ("ODD NUMBER");
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
		printf("%s", even_odd(argv[1]));
	}
	printf("\n");
	return(0);
}