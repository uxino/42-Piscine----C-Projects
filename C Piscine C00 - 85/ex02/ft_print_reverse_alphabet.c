/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:29:39 by museker           #+#    #+#             */
/*   Updated: 2023/03/25 15:10:32 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	tersalfabe;

	tersalfabe = 'z';
	while (tersalfabe >= 'a')
	{
		write(1, &tersalfabe, 1);
		tersalfabe--;
	}	
}
