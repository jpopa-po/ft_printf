/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_st.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:35:50 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/11/02 11:42:51 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_st(va_list ap)
{
	char	*str;
	int		x;

	str = va_arg(ap, char *);
	x = ft_putstr(str);
	return (x);
}