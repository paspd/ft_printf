#include "../incs/ft_printf.h"

int		ft_print_u(t_data *data)
{
	int nbd;
	int i;
	int j;

	if (data->u2 >= 0)
		nbd = ft_nbd(data->u2, data);
	else
		nbd = ft_unsigned_nbd((unsigned)data->u2);
	i = data->width - nbd;
	j = data->precision - nbd;
	if (data->width < nbd || data->precision < nbd)
		ft_case_1_u(nbd, i, j, data);
	else
		ft_case_2_u(i, j, data);
	return (0);
}

int		ft_case_1_u(int nbd, int i, int j, t_data *data)
{
	if (data->width > nbd && data->minus)
	{
		ft_putnbr_unsigned(data->u2, data);
		ft_putchar_ameliore(i, ' ', data);
		return (0);
	}
	if ((data->width > nbd && data->zero) && (data->precision < 0))
		ft_putchar_ameliore(i, '0', data);
	else if (data->width > nbd && !data->minus)
		ft_putchar_ameliore(i, ' ', data);
	if (data->precision > nbd)
		ft_putchar_ameliore(j, '0', data);
	ft_putnbr_unsigned((unsigned)data->u2, data);
	return (0);
}

int		ft_case_2_u(int i, int j, t_data *data)
{
	if (data->width > data->precision && data->minus)
	{
		ft_putchar_ameliore(j, '0', data);
		ft_putnbr_unsigned(data->u2, data);
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
	ft_putnbr_unsigned(data->u2, data);
	return (0);
}

int		ft_unsigned_nbd(unsigned long int nb)
{
	int i;

	i = 1;
/*	if (nb < 0)
	{
		nb = nb * -1;
	}*/
	while (nb >= 10)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}
