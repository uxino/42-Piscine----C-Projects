/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 03:28:54 by museker           #+#    #+#             */
/*   Updated: 2023/04/05 12:39:18 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		faktoriyel;

	faktoriyel = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		faktoriyel *= nb;
		nb--;
	}
	return (faktoriyel);
}
