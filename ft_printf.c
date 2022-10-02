/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:37:47 by marferre          #+#    #+#             */
/*   Updated: 2022/10/02 12:34:47 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formats(va_list args, char format)
{
	int	dst;

	dst = 0;
	if (format == '%')
		dst += ft_print_chr('%');
	else if (format == 'i' || format == 'd')
		dst += ft_print_nbr(va_arg(args, int));
	else if (format == 'c')
		dst += ft_print_chr(va_arg(args, int));
	else if (format == 's')
		dst += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		dst += ft_print_ptr(va_arg(args, void *));
	else if (format == 'u')
		dst += ft_print_base(va_arg(args, int), BS_DEC);
	else if (format == 'x')
		dst += ft_print_base(va_arg(args, int), BS_HX_MINUS);
	else if (format == 'X')
		dst += ft_print_base(va_arg(args, int), BS_HX_MAYUS);
	else
		dst += ft_print_str(va_arg(args, char *));
	return (dst);
}

int	ft_printf(char const *prm, ...)
{
	va_list	args;
	int		data;
	int		i;

	i = 0;
	data = 0;
	va_start(args, prm);
	while (prm[i])
	{
		if (prm[i] == '%')
		{
			data += ft_formats(args, prm[i + 1]);
			i++;
		}
		else
			data += write(1, &prm[i], 1);
		i++;
	}
	va_end(args);
	return (data);
}
