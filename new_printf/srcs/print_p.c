#include "../incs/ft_printf.h"

void	ft_print_p(t_data *data)
{
	char			*base;
	char			charp[data->end];

	base = "0123456789abcdef";
	charp[data->end] = '\0';
	data->end = data->end - 1;
	while (data->end >= 0)
	{
		charp[data->end] = base[(data->adr % 16)];
		data->adr = data->adr / 16;
		data->end--;
	}
	if (data->width > (int)ft_strlen(charp))
		ft_case_1_p(data, charp);
	else
		ft_case_2_p(data, charp);
}

void	ft_case_1_p(t_data *data, char *charp)
{
	if (data->minus)
	{
		ft_case_2_p(data, charp);
		ft_putchar_ameliore((data->width - (ft_strlen(charp) + 2)), \
				' ', data);
	}
	if (!data->minus)
	{
		ft_putchar_ameliore((data->width - (ft_strlen(charp) + 2)), \
				' ', data);
		ft_case_2_p(data, charp);
	}
}

void	ft_case_2_p(t_data *data, char *charp)
{
	int i;

	i = 0;
	if ((data->p == NULL && data->precision == 0) && data->width > 2)
		ft_putchar_len(' ', data);
	ft_putchar_len('0', data);
	ft_putchar_len('x', data);
	if (data->p == NULL && data->precision == 0)
		return ;
	while (i < (int)ft_strlen(charp))
	{
		ft_putchar_len(charp[i], data);
		i++;
	}
}
