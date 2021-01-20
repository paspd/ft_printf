#include "../incs/ft_printf.h"

void	ft_print_c(t_data *data)
{
	data->c = (char)data->intc;
	if (data->width > 1)
		ft_case_1_c(data);
	else
		ft_putchar_len(data->c, data);
}

int		ft_case_1_c(t_data *data)
{
	if (data->width > 1 && data->minus)
	{
		ft_putchar_len(data->c, data);
		ft_putchar_ameliore((data->width - 1), ' ', data);
		return (0);
	}
	if ((data->width > 1 && data->zero))
		ft_putchar_ameliore((data->width - 1), '0', data);
	else if (data->width > 1 && !data->minus)
		ft_putchar_ameliore((data->width - 1), ' ', data);
	ft_putchar_len(data->c, data);
	return (0);
}

int		ft_case_4_d(int j, t_data *data)
{
	if (data->d < 0)
	{
		ft_putchar_len('-', data);
		ft_putchar_len('0', data);
		data->moins = '-';
	}
	ft_putchar_ameliore(j, '0', data);
	ft_putnbr(data->d, data);
	return (0);
}
