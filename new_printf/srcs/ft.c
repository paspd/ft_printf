/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:43:09 by atourret          #+#    #+#             */
/*   Updated: 2021/01/12 10:04:36 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ft_printf.h"

int		is_flags(char c)
{
	return (c == '-' || c == '.' || c == '*' || c == '0' || c == '%');
}

int		is_specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u' || \
			c == 'x' || c == 'X' || c == 'p' || c == '%');
}

void	ft_putchar_len(char c, t_data *data)
{
	write(1, &c, 1);
	data->len++;
}

void	ft_putstr_len(char *str, t_data *data)
{
	int		i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
		write(1, &str[i++], 1);
	data->len += i;
}
