/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pt.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:39:00 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/11/02 11:39:32 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pt(va_list ap)
{
	unsigned long int	n;
	int					nbr;

	nbr = 0;
	n = va_arg(ap, unsigned long int);
	if (n == 18446744073709551615U)
	{
		return ((ft_putstr("0xffffffffffffffff")));
	}
	if (n == 2147483648)
	{
		return ((ft_putstr("0x80000000")));
	}
	write(1, "0x", 2);
	nbr += 2;
	if (n == 0)
		write(1, "0", 1);
	ft_itohx((unsigned long int)n, 0, &nbr);
	return (nbr);
}
