#include "../incs/ft_printf.h"

void	ft_print_r(t_data *data, char *str)
{
	int i;

	i = data->first + 1;
	if (data->minus)
	{
		ft_case_1_r(data, i, str);
		return ;
	}
	if (data->sp && data->width > 0)
		ft_putchar_ameliore((data->width - 1), ' ', data);
	if (data->zero && data->width > 0)
		ft_putchar_ameliore((data->width - 1), '0', data);
	while (str[i] != '%' && i < data->end)
		i++;
	while (i < data->end)
	{
		ft_putchar_len(str[i], data);
		i++;
	}
}

void	ft_case_1_r(t_data *data, int i, char *str)
{
	ft_putchar_len('%', data);
	ft_putchar_ameliore((data->width - 1), ' ', data);
	while (str[i] != '%' && i < data->end)
		i++;
	i = i + 1;
	while (i < data->end)
	{
		ft_putchar_len(str[i], data);
		i++;
	}
}
