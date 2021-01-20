/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:11:40 by atourret          #+#    #+#             */
/*   Updated: 2021/01/18 14:53:07 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ft_printf.h"

void len_arg_bis(char c, t_data *data, va_list args)
{
	if (c == 's')
	{
		data->s = va_arg(args, char *);
		ft_print_s(data);
//
	}
	else if (c == 'u')
		{
			data->u2 = va_arg(args, unsigned);
			ft_print_u(data);
//
		}
	else if (c == 'x' || c == 'X')
	{
		data->x = va_arg(args, int);
		ft_print_x(data);
//
	}
	else if (c == 'p')
	{
		data->p = va_arg(args, void*);
		data->adr = (unsigned long)data->p;
		data->end = ft_nbx(data->adr) + 1;
		ft_print_p(data);
	}
}

int	len_arg(char c, t_data *data, va_list args)
{
	if (c == 'i' || c == 'd')
	{
		data->d = va_arg(args, int);
		ft_print_d(data);
	}
	else if (c == 'c')
	{
		data->intc = va_arg(args, int);
		ft_print_c(data);
	}
	else
		len_arg_bis(c, data, args);
	return (0);
}
