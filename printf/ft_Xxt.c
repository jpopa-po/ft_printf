/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Xxt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:37:34 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/11/02 11:39:53 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_Xxt(va_list ap)
{
	unsigned int	n;
	int				x;

	x = 0;
	n = va_arg(ap, unsigned int);
	if (n == 0)
		ft_putchar('0');
	ft_itohx(n, 1, &x);
	return (x);
}
