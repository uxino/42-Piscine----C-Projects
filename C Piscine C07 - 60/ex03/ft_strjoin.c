/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:47:31 by museker           #+#    #+#             */
/*   Updated: 2023/04/11 15:56:23 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*a;

	a = malloc(sizeof(strs));
	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			a[x++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i < (size - 1))
		{
			a[x++] = sep[j++];
		}
		i++;
	}
	a[x] = '\0';
	return (a);
}
