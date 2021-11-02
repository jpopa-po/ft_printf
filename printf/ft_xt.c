/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xt.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:37:00 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/11/02 11:45:12 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_xt(va_list ap)
{
	unsigned int long	n;
	int					x;

	x = 0;
	n = va_arg(ap, unsigned long int);
	if (n == 18446744073709551615U)
	{
		return ((ft_putstr("0xffffffffffffffff")));
	}
	if (n == 2147483648)
	{
		return ((ft_putstr("0x80000000")));
	}
	if (n == 0)
	{
		x += 1;
		ft_putchar('0');
	}
	ft_itohx(n, 0, &x);
	return (x);
}
