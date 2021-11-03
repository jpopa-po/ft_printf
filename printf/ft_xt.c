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

int	ft_check(char *num)
{
	int	len;
	int	i;
	int	j;

	len = ft_strlen(num);
	i = 0;
	j = 0;
	if (len <= 1)
		return (1);
	while (num[i] != '\0' && num[j] != '\0')
	{
		while (num[i] != '\0' && num[j] != '\0')
		{
			if ((num[i] == num[j] && i != j))
				return (1);
			if ((num[j] == '+' || num[j] == '-'))
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

void	ft_putnbr_base(unsigned int n, char *base, int *nbr)
{
	unsigned int	n_len;

	if (ft_check(base) == 0)
	{
		n_len = ft_strlen(base);
		if (n < 0)
		{
			*nbr += write(1, "-", 1);
			ft_putnbr_base(-n, base, nbr);
		}
		else if (n >= n_len)
			ft_putnbr_base(n / n_len, base, nbr);
		*nbr += ft_putchar(base[n % n_len]);
	}
}

int	ft_xt(va_list ap)
{
	unsigned int	x;
	int				num;

	num = 0;
	x = va_arg(ap, unsigned int);
	ft_putnbr_base(x, "0123456789abcdef", &num);
	return (num);
}

int	ft_Xxt(va_list ap)
{
	unsigned int	x;
	int				n;

	n = 0;
	x = va_arg(ap, unsigned int);
	ft_putnbr_base(x, "0123456789ABCDEF", &n);
	return (n);
}
