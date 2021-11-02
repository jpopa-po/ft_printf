#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
#include <limits.h>
int		ft_ct(va_list ap);
int		ft_idt(va_list ap);
int		ft_pt(va_list ap);
int		ft_st(va_list ap);
int		ft_ut(va_list ap);
int		ft_xt(va_list ap);
int		ft_Xxt(va_list ap);
void	ft_itohx(unsigned int n, int cond, int *nbr);
int		ft_putchar(char c);
void	ft_putnbr(int num, int *nbr);
int		ft_putstr(char *s);
void	ft_putunbr(unsigned int n, int *num);
int		ft_toupper(int c);
int		ft_printf(const char *format, ...);
char	*ft_strdup(const char *s);
#endif
