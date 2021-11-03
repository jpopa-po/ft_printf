/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:17:29 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/11/02 13:24:09 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_type(const char *frmt, va_list ap, int *i)
{
	char	*ptr;
	int		pos;

	pos = 0;
	ptr = ft_strdup(frmt);
	if (ptr[*i] == 'c')
		pos += ft_ct(ap);
	if (ptr[*i] == 's')
		pos += ft_st(ap);
	if (ptr[*i] == 'i' || ptr[*i] == 'd')
		pos += ft_idt(ap);
	if (ptr[*i] == 'x')
		pos += ft_xt(ap);
	if (ptr[*i] == 'X')
		pos += ft_Xxt(ap);
	if (ptr[*i] == 'u')
		pos += ft_ut(ap);
	if (ptr[*i] == 'p')
		pos += ft_pt(ap);
	if (ptr[*i] == '%')
		pos += ft_putchar('%');
	free(ptr);
	ptr = NULL;
	return (pos);
}

int	ft_printf(const char *frmt, ...)
{
	int		i;
	int		pos;
	va_list	ap;

	pos = 0;
	i = 0;
	va_start(ap, frmt);
	while (frmt[i] != '\0')
	{
		if (frmt[i] == '%')
		{
			i++;
			pos += ft_type(frmt, ap, &i);
		}
		else
			pos += write(1, &frmt[i], 1);
		i++;
	}
	return (pos);
}

int	main(void)
{
	printf("%d\n", printf("%s", "≠ñ"));
	printf("%d\n", ft_printf("%s", "≠ñ"));
	return (0);
}
