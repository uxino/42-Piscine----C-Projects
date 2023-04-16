#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	i = 0;
	total = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		total = total * nb;
		i++;
	}
	return (total);
}
