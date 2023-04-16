#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	say;

	say = 0;
	while (str[say] != '\0')
	{
		say++;
	}
	return (say);
}

char	*ft_strcat(char *dest, char *src)

{
	int		a;
	int		b;

	a = 0;
	b = ft_strlen(dest);
	while (src[a] != '\0')
	{
		dest[a + b] = src[a];
		a++;
	}
	dest[a + b] = '\0';
	return (dest);
}
