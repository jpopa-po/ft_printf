/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:53:05 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/11/03 10:53:05 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
int		ft_ct(va_list ap);
int		ft_idt(va_list ap);
int		ft_pt(va_list ap);
int		ft_st(va_list ap);
int		ft_ut(va_list ap);
int		ft_xt(va_list ap);
int		ft_Xxt(va_list ap);
int		ft_putchar(char c);
void	ft_putnbr(int num, int *nbr);
int		ft_putstr(char *s);
void	ft_putunbr(unsigned int n, int *num);
int		ft_printf(const char *format, ...);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
int		ft_check(char *base);
#endif
