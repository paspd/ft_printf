#include "../incs/ft_printf.h"

void	ft_print_s(t_data *data)
{
	int nbc;
	int i;

	nbc = ft_strlen(data->s);
	i = data->width - nbc;
	if (!data->minus)
	{
		if (data->width <= nbc || (data->precision >= nbc \
					|| !data->dot))
			ft_case_1_s(nbc, i, data);
		else if (data->width > nbc && data->precision < nbc)
			ft_case_2_s(0, data);
	}
	else
	{
		if (data->width <= nbc || (data->precision >= nbc \
					|| !data->dot))
			ft_case_3_s(nbc, i, data);
		else if (data->width > nbc && data->precision < nbc)
			ft_case_4_s(0, data);
	}
}

void	ft_case_1_s(int nbc, int i, t_data *data)
{
	if (data->width > nbc)
	{
		ft_putchar_ameliore(i, ' ', data);
		ft_putstr_len(data->s, data);
	}
	else if (data->precision >= 0 && data->precision < nbc && data->dot)
	{
		ft_putchar_ameliore((data->width - data->precision), ' ', data);
		i = 0;
		while (i < data->precision)
		{
			ft_putchar_len(data->s[i], data);
			i++;
		}
	}
	else
		ft_putstr_len(data->s, data);
}

void	ft_case_2_s(int i, t_data *data)
{
	while (i < (data->width - data->precision))
	{
		ft_putchar_len(' ', data);
		i++;
	}
	i = 0;
	while (i < data->precision)
	{
		ft_putchar_len(data->s[i], data);
		i++;
	}
}

void	ft_case_3_s(int nbc, int i, t_data *data)
{
	if (data->width > nbc)
	{
		ft_putstr_len(data->s, data);
		ft_putchar_ameliore(i, ' ', data);
	}
	else if (data->precision >= 0 && data->precision < nbc && data->dot)
	{
		i = 0;
		while (i < data->precision)
		{
			ft_putchar_len(data->s[i], data);
			i++;
		}
		ft_putchar_ameliore((data->width - data->precision), ' ', data);
	}
	else
		ft_putstr_len(data->s, data);
}

void	ft_case_4_s(int i, t_data *data)
{
	while (i < data->precision)
	{
		ft_putchar_len(data->s[i], data);
		i++;
	}
	i = 0;
	while (i < (data->width - data->precision))
	{
		ft_putchar_len(' ', data);
		i++;
	}
}
