/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 06:05:25 by museker           #+#    #+#             */
/*   Updated: 2023/03/28 06:05:26 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
