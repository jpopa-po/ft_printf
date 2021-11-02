/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:44:29 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/11/02 11:45:31 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_itohx(unsigned int n, int cond, int *nbr)
{
	unsigned int	hex;
	unsigned int	bhex;

	hex = 0;
	if (n)
	{
		bhex = n / 16;
		hex = n % 16;
		ft_itohx(n / 16, cond, nbr);
	}
	if ((hex > 9) && (cond == 0))
	{
		*nbr += 1;
		ft_putchar((hex - 10) + 'a' );
	}
	else if ((hex > 9) && (cond == 1))
	{
		*nbr += 1;
		ft_putchar((hex - 10) + 'A' );
	}
	else if (hex != 0)
	{
		*nbr += 1;
		ft_putchar(hex + '0');
	}
}
