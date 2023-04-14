/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:07:37 by museker           #+#    #+#             */
/*   Updated: 2023/04/01 16:14:00 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
