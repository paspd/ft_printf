#include "../incs/ft_printf.h"

void	ft_print_x(t_data *data)
{
	unsigned int	ux;
	char			*base;

	ux = (unsigned)data->x;
	if (data->type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (data->x >= 0)
	{
		data->end = ft_nbx((unsigned)data->x) + 1;
		ft_positive_x(data, base);
	}
	else
	{
		data->end = ft_nbx(ux) + 1;
		ft_negative_x(data, ux, base);
	}
}

void	ft_positive_x(t_data *data, char *base)
{
	int		x;
	char	charx[data->end];

	x = data->x;
	charx[data->end] = '\0';
	data->end = data->end - 1;
	while (data->end >= 0)
	{
		charx[data->end] = (base[(x % 16)]);
		x = x / 16;
		data->end--;
	}
	x = ft_strlen(charx);
	data->i = data->width - x;
	if (data->width < x || data->precision < x)
		ft_case_1_x(x, (data->precision - x), data, charx);
	else
		ft_case_2_x((data->width - x), (data->precision - x), data, charx);
}

void	ft_negative_x(t_data *data, unsigned int ux, char *base)
{
	char	charx[data->end];
	int		x;

	charx[data->end] = '\0';
	data->end = data->end - 1;
	while (data->end >= 0)
	{
		charx[data->end] = (base[(ux % 16)]);
		ux = ux / 16;
		data->end--;
	}
	x = ft_strlen(charx);
	data->i = data->width - x;
	if (data->width < x || data->precision < x)
		ft_case_1_x(x, (data->precision - x), data, charx);
	else
		ft_case_2_x((data->width - x), (data->precision - x), data, charx);
}

int		ft_case_1_x(int nbd, int j, t_data *data, char *charx)
{
	if (data->width > nbd && data->minus)
	{
		if (data->precision == 0 && data->x == 0)
			ft_putchar_len(' ', data);
		else
			ft_putstr_len(charx, data);
		ft_putchar_ameliore(data->i, ' ', data);
		return (0);
	}
	if ((data->width > nbd && data->zero) && (data->precision < 0))
		ft_putchar_ameliore(data->i, '0', data);
	else if (data->width > nbd && !data->minus)
		ft_putchar_ameliore(data->i, ' ', data);
	if (data->precision > nbd)
		ft_putchar_ameliore(j, '0', data);
	if (data->precision == 0 && data->x == 0 && data->width > 0)
		ft_putchar_len(' ', data);
	if (data->precision == 0 && data->x == 0)
		return (0);
	ft_putstr_len(charx, data);
	return (0);
}

int		ft_case_2_x(int i, int j, t_data *data, char *charx)
{
	if (data->width > data->precision && data->minus)
	{
		ft_putchar_ameliore(j, '0', data);
		ft_putstr_len(charx, data);
		ft_putchar_ameliore(i - j, ' ', data);
		return (0);
	}
	if (data->width > data->precision && !data->minus)
	{
		ft_putchar_ameliore(i - j, ' ', data);
		ft_putchar_ameliore(j, '0', data);
	}
	else
		ft_putchar_ameliore(j, '0', data);
	ft_putstr_len(charx, data);
	return (0);
}
