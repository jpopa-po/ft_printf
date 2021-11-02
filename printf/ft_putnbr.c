/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:42:18 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/11/02 11:46:30 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *nbr)
{
	if (num < 10 && num >= 0)
	{
		ft_putchar(num + '0');
		*nbr += 1;
	}
	else if (num >= 10)
	{
		ft_putnbr(num / 10, nbr);
		ft_putchar(num % 10 + '0');
		if (num < 0)
			ft_putchar('-');
		*nbr += 1;
	}
	else if (num == (-2147483648))
	{
		*nbr += 11;
		write(1, "-2147483648", 11);
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(num * -1, nbr);
		*nbr += 1;
	}
}
