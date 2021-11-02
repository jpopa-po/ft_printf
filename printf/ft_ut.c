/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ut.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:38:27 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/11/02 12:56:17 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ut(va_list ap)
{
	unsigned int	u;
	int				nbr;

	nbr = 0;
	u = va_arg(ap, unsigned int);
	ft_putunbr(u, &nbr);
	return (nbr);
}
