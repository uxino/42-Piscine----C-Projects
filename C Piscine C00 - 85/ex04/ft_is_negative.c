#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pozitif;
	char	negatif;

	pozitif = 'P';
	negatif = 'N';
	if (n >= 0)
	{
		write(1, &pozitif, 1);
	}
	else
	{
		write(1, &negatif, 1);
	}
}
