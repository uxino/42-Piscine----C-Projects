/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:31:35 by museker           #+#    #+#             */
/*   Updated: 2023/04/11 16:21:07 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
