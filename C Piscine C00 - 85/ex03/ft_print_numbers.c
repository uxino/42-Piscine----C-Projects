#include <unistd.h>

void	ft_print_numbers(void)
{
	char	rakam;

	rakam = '0';
	while (rakam <= '9')
	{
		write(1, &rakam, 1);
		rakam++;
	}
}
