/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:51:05 by museker           #+#    #+#             */
/*   Updated: 2023/04/03 21:51:07 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putstr(char *str)
{
	unsigned int	sayac;

	sayac = 0;
	while (str[sayac] != '\0')
	{
		ft_putchar(str[sayac]);
		sayac++;
	}
}
