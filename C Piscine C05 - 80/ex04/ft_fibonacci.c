/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:39:58 by museker           #+#    #+#             */
/*   Updated: 2023/04/09 16:49:24 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;
	int	count;

	i = 2;
	count = 0;
	if (index < 0)
	{
		return (-1);
	}
	else if (index < 2)
	{
		return (index);
	}
	if (index >= 2)
	{
		count = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (count);
}
int main()
{
	printf("%d",ft_fibonacci(5));
}
