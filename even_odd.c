#include <libc.h>

char *check_arguments(char *str)
{
	if (!str)
		return (NULL);
	while (*str && (*str >= '0' && *str <= '9'))
		str++;
	if (*str == '\0')
		return ("valid arguments");
	return (NULL);
}

int	ft_atoi(char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	if (!str)
		return (0);
	while (*str && (*str == 32 || (*str >= 9 && *str <=13)))
		str++;
	if(*str == '+' || *str == '-')
	{
		if(*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

char	*even_odd(char *str)
{
	int	nbr;

	if (!str)
		return (NULL);
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
		if (!check_arguments(argv[1]) || !ft_atoi(argv[1]) || !even_odd(argv[1]))
		{
			printf("invalid arguments");
			return (0);
		}
		printf("%s\n", check_arguments(argv[1]));
		printf("%s", even_odd(argv[1]));
	}
	printf("\n");
	return(0);
}