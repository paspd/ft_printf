#include "../incs/ft_printf.h"

int		ft_nbd(long int nb, t_data *data)
{
	int i;

	i = 1;
	if (nb < 0)
	{
		if (data->type != 'u')
			i = i + 1;
		nb = nb * -1;
	}
	while (nb >= 10)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

int		ft_nbx(unsigned long i)
{
	int j;

	j = 0;
	while ((i = i / 16) > 0)
		j++;
	return (j);
}

void	ft_putnbr(long int nb, t_data *data)
{
	if (nb < 0)
	{
		if (data->type != 'u' && data->minus == 'x')
			ft_putchar_len('-', data);
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, data);
		ft_putnbr(nb % 10, data);
	}
	else
		ft_putchar_len(nb + '0', data);
}

void	ft_putnbr_unsigned(unsigned int nb, t_data *data)
{
	if (nb == 0 && data->precision == 0)
	{
		if (data->width > 0)
			ft_putchar_len(' ', data);
		return ;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, data);
		ft_putnbr(nb % 10, data);
	}
	else
		ft_putchar_len(nb + '0', data);
}

void	ft_putchar_ameliore(int end, char c, t_data *data)
{
	int i;

	i = 0;
	if (end < 0)
		return ;
	while (i < end)
	{
		data->len++;
		write(1, &c, 1);
		i++;
	}
}
