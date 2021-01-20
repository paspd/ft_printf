#include "../incs/ft_printf.h"

void	ft_print_d(t_data *data)
{
	long int	nbd;
	int			i;
	int			j;

	nbd = ft_nbd(data->d, data);
	i = data->width - nbd;
	j = data->precision - nbd;
	data->moins = 'x';
	if (data->width <= nbd || data->precision < nbd)
		ft_case_1_d(nbd, i, j, data);
	else
	{
		if (data->width > data->precision && data->minus)
			ft_case_2_d(i, j, data);
		else if (data->width > data->precision && !data->minus)
			ft_case_3_d(i, j, data);
		else
			ft_case_4_d(j, data);
	}
}

int		ft_case_1_d(long int nbd, int i, int j, t_data *data)
{
	if (data->width > nbd && data->minus)
	{
		if (data->precision == 0 && data->d == 0)
			ft_putchar_len(' ', data);
		else
			ft_putnbr(data->d, data);
		ft_putchar_ameliore(i, ' ', data);
		return (0);
	}
	if ((data->width > nbd && data->zero) && (data->precision < 0))
	{
		if (data->d < 0)
		{
			ft_putchar_len('-', data);
			data->moins = '-';
		}
		ft_putchar_ameliore(i, '0', data);
	}
	else if (data->width > nbd && !data->minus)
		ft_putchar_ameliore(i, ' ', data);
	ft_case_5_d(nbd, j, data);
	return (0);
}

int		ft_case_5_d(long int nbd, int j, t_data *data)
{
	if (data->precision >= nbd)
	{
		if (data->d < 0)
		{
			ft_putchar_len('-', data);
			ft_putchar_len('0', data);
			data->moins = '-';
		}
		ft_putchar_ameliore(j, '0', data);
	}
	if (data->precision == 0 && data->d == 0 && data->width > 0)
		ft_putchar_len(' ', data);
	if (data->precision == 0 && data->d == 0)
		return (0);
	ft_putnbr(data->d, data);
	return (0);
}

int		ft_case_2_d(int i, int j, t_data *data)
{
	if (data->d < 0)
	{
		ft_putchar_len('-', data);
		ft_putchar_len('0', data);
		data->moins = '-';
	}
	ft_putchar_ameliore(j, '0', data);
	ft_putnbr(data->d, data);
	if (data->d < 0)
		j = j + 1;
	ft_putchar_ameliore(i - j, ' ', data);
	return (0);
}

int		ft_case_3_d(int i, int j, t_data *data)
{
	if (data->width > data->precision && !data->minus)
	{
		if (data->d < 0)
			ft_putchar_ameliore(i - (j + 1), ' ', data);
		else
			ft_putchar_ameliore(i - j, ' ', data);
		if (data->d < 0)
		{
			ft_putchar_len('-', data);
			ft_putchar_len('0', data);
			data->minus = '-';
		}
		ft_putchar_ameliore(j, '0', data);
	}
	ft_putnbr(data->d, data);
	return (0);
}
