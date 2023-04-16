#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		faktoriyel;

	faktoriyel = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		faktoriyel *= nb;
		nb--;
	}
	return (faktoriyel);
}
