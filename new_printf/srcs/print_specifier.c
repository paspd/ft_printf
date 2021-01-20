/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:18:49 by atourret          #+#    #+#             */
/*   Updated: 2021/01/12 10:55:23 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ft_printf.h"

void	print_int(t_data *data, va_list args)
{
	unsigned int		num;
	char				c;

	c = data->str[data->i];
	if (c == 'd' || c == 'i')
	{
		ft_putnbr(num = va_arg(args, int), data);
	}
	else if (c == 'u')
	{
		ft_putnbr(num = va_arg(args, unsigned int), data);
	}
}


void	print_spec(t_data *data, va_list args)
{
	char	*num;
	char	c;

	c = data->str[data->i];
	if (c == 'c')
		ft_putchar_len(va_arg(args, int), data);
	else if (c == 's')
		ft_putstr_len(va_arg(args, char *), data);
	else if (c == 'd' || c == 'i' || c == 'u')
		print_int(data, args);
	else if (c== 'x' || c == 'X' || c == 'p')
	{
		if (!(num = ft_itoa_base(va_arg(args, unsigned long long), c)))
			free(num);
		if (c == 'p')
			ft_putstr_len("0x", data);
		if (c == 'X')
			ft_tostrupper(num);
		ft_putstr_len(num, data);
	}
	else
		print_int(data, args);
}
