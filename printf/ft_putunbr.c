/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:44:03 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/11/02 11:44:04 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, int *num)
{
	unsigned int	nbr;

	nbr = n;
	if (nbr < 0)
		nbr = -nbr;
	if (nbr >= 10)
	{
		ft_putunbr(nbr / 10, num);
		ft_putchar(nbr % 10 + '0');
		*num += 1;
	}
	else
	{	
		ft_putchar(nbr + '0');
		*num += 1;
	}
}
