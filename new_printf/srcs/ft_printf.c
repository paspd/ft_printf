/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:05:59 by atourret          #+#    #+#             */
/*   Updated: 2021/01/14 12:44:19 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ft_printf.h"

void	init_flags(t_data *data)
{
	data->dot = 0;
	data->minus = 0;
	data->zero = 0;
	data->star = 0;
	data->width = 0;
	data->percent = 0;
	data->sp = 0;
	data->star_val = 0;
	data->precision = 0;
	data->negative = 0;
	data->back_sp = 1;
	data->test = 0;
	data->d = 0;
	data->intc = 0;
	data->first = data->i;
}

int ft_printf(const char *str, ...)
{
	t_data	data;
	va_list	args;

	data.i = 0;
	data.len = 0;
	data.str = (char *)str;
	va_start(args, str);
	while (data.str[data.i])
	{
		init_flags(&data);
		if (data.str[data.i] == '%')
			pre_treatment(&data, args);
		else 
			ft_putchar_len(data.str[data.i], &data);
		data.i++;
	}
	va_end(args);
	return (data.len);
}
