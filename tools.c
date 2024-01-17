#include "math.h"

int check_arguments(char *str)
{
	if (!str)
		return (0);
	while (*str && (*str >= '0' && *str <= '9'))
		str++;
	if (*str == '\0')
		return (1);
	return (0);
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