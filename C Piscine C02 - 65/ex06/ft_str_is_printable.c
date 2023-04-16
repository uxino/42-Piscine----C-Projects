#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
	i = 0;
		while (str[i] != '\0')
		{
			if (!(32 <= str[i] && str[i] <= 126))
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
}
