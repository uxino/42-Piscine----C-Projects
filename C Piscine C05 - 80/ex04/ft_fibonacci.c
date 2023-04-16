#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;
	int	count;

	i = 2;
	count = 0;
	if (index < 0)
	{
		return (-1);
	}
	else if (index < 2)
	{
		return (index);
	}
	if (index >= 2)
	{
		count = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (count);
}
int main()
{
	printf("%d",ft_fibonacci(5));
}
