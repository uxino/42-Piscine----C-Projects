void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;

	while (size >= 0)
	{
		count = 0;
		while (count < size - 1)
		{
			if (tab[count] > tab[count + 1])
			{
					swap = tab[count];
					tab[count] = tab[count + 1];
					tab[count + 1] = swap;
			}
			count++;
		}
		size--;
	}
}
