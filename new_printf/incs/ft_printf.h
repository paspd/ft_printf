/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:07:03 by atourret          #+#    #+#             */
/*   Updated: 2021/01/14 12:01:53 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/libft.h"

#include <stdio.h> // A SUPPRIMER ZEBI

typedef struct	s_data
{
	int		dot;
	int		minus;
	int		zero;
	int		star;
	int		percent;
	int		sp;

	int		width;
	int		precision;
	int		star_val;

	int		i;
	int		len;
	char	*str;
	int		negative;

	int		test;
	int		back_sp;

	int		d;
	char	c;
	int		intc;
	char	moins;
	unsigned long	adr;
	int				end;
	void			*p;
	int				first;
	int				x;
	char			type;
	char			*s;
	int				u2;
}				t_data;

int		ft_printf(const char *str, ...) __attribute__
			((format(printf,1,2)));

int		pre_treatment(t_data *data, va_list args);
int		star_treatment(t_data *data, va_list args);
void	dot_treatment(t_data *data, va_list args);

void	print(char *res, t_data *data, char c);
void	print_spec(t_data *data, va_list args);
int		len_arg(char c, t_data *data, va_list args);

void	ft_putchar_len(char c, t_data *data);
void	ft_putstr_len(char *str, t_data *data);
int		is_flags(char c);
int		is_specifier(char c);

char	*ft_tostrupper(char *str);
char	*ft_itoa_base(unsigned long long n, char type);

void	ft_impression(t_data *data);
void	ft_impression2(t_data *data, char *str);
void	ft_putchar_len(char c, t_data *data);
int		res(char *str, char c, int first, int end);
int		ft_putstr(char *s, t_data *data);
int		ft_precision_memory(char *str, t_data *data);
int		ft_recup_precision(char *str, int j, t_data *data,\
			int malloc);
int		ft_width_memory(char *str, int first, int end);
int		ft_recup_width(char *str, int first, int end,\
			t_data *data);
int		ft_recup_flag(char *str, t_data *data);
int		ft_nbd(long int nb, t_data *data);
void	ft_putnbr(long int nb, t_data *data);
void	ft_putnbr_unsigned(unsigned int nb, t_data *data);
void	ft_putchar_ameliore(int end, char c, t_data *data);
int		ft_nbx(unsigned long i);
void	ft_print_d(t_data *data);
int		ft_case_1_d(long int nbd, int i, int j, t_data *data);
int		ft_case_2_d(int i, int j, t_data *data);
int		ft_case_3_d(int i, int j, t_data *data);
int		ft_case_4_d(int j, t_data *data);
int		ft_case_5_d(long int nbd, int j, t_data *data);
void	ft_print_s(t_data *data);
void	ft_case_1_s(int nbc, int i, t_data *data);
void	ft_case_2_s (int i, t_data *data);
void	ft_case_3_s(int nbc, int i, t_data *data);
void	ft_case_4_s(int i, t_data *data);
void	ft_print_c(t_data *data);
int		ft_case_1_c(t_data *data);
void	ft_print_p(t_data *data);
void	ft_case_1_p(t_data *data, char *charp);
void	ft_case_2_p(t_data *data, char *charp);
int		ft_print_u(t_data *data);
int		ft_case_1_u(int nbd, int i, int j, t_data *data);
int		ft_case_2_u(int i, int j, t_data *data);
int		ft_unsigned_nbd(unsigned long int nb);
void	ft_print_x(t_data *data);
void	ft_positive_x(t_data *data, char *base);
void	ft_negative_x(t_data *data, unsigned int ux, char *base);
int		ft_case_1_x(int nbd, int j, t_data *data, char *charx);
int		ft_case_2_x(int i, int j, t_data *data, char *charx);
void	ft_print_r(t_data *data, char *str);
void	ft_case_1_r(t_data *data, int i, char *str);

#endif
