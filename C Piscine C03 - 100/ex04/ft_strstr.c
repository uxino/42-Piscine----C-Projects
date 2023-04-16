#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == 0)
	{
		return (str);
	}
	while (str[i] != 0)
	{
		x = 0;
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
		{
			if (to_find[x + 1] == 0)
			{
				return (&str[i]);
			}
			x++;
		}
		i++;
	}
	return (0);
}
