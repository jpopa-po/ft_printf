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

void	ft_putnbr_base_p(unsigned long int n, char *base, int *num)
{
	unsigned long int	i;
	unsigned long int	c;

	if (ft_check(base) == 0)
	{
		i = ft_strlen(base);
		if (n < 0)
		{
			*num += write(1, "-", 1);
			ft_putnbr_base_p(-n, base, num);
		}
		if (n > 0)
		{
			 ft_putnbr_base_p(n / i, base, num);
			 c = n % i;
			 *num += write(1, &base[c], 1);
		}
	}
}

int	ft_pt(va_list ap)
{
	unsigned long int	p;
	int					n;

	n = 0;
	p = va_arg(ap, unsigned long int);
	n += write(1, "0x", 2);
	if (p == 0)
		n += write(1, "0", 1);
	ft_putnbr_base_p((unsigned long int)p, "0123456789abcdef", &n);
	return (n);
}
