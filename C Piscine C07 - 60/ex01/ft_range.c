#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dup;

	dup = (int *)malloc((max - min + 1) * sizeof(int));
	if (min >= max)
		return (NULL);
	if (!dup)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		dup[i++] = min++;
	}
	return (dup);
}
