#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (k == 0 && ('a' <= str[i] && str[i] <= 'z'))
		{
			str[i] -= 32;
			k++;
		}
		else if (k > 0 && ('A' <= str[i] && str[i] <= 'Z'))
			str[i] += 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			k = 0;
		else
			k++;
		i++;
	}
	return (str);
}
