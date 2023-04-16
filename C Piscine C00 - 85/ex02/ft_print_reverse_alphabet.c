#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	tersalfabe;

	tersalfabe = 'z';
	while (tersalfabe >= 'a')
	{
		write(1, &tersalfabe, 1);
		tersalfabe--;
	}	
}
