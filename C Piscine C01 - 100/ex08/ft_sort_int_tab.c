/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:47:06 by museker           #+#    #+#             */
/*   Updated: 2023/03/26 12:25:43 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
