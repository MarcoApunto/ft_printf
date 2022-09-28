/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:37:47 by marferre          #+#    #+#             */
/*   Updated: 2022/09/28 16:06:26 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formats(va_list args, char format)
{
	int	dst;

	dst = 0;
	if (format == '%')
		dst += ft_print_chr('%');
	if (format == 's')
		dst += ft_print_str(va_arg(args, char *));
	if (format == 'c')
		dst += ft_print_chr(va_arg(args, int));
	if (format == 'i')
		dst += ft_print_nbr(va_arg(args, int));
	/*
	if (format == 'd')
		return (0);
	if (format == 'u')
		return (0);
	*/
	if (format == 'p')
		dst += ft_print_ptr(va_arg(args, void *));
	/*
	if (format == 'x')
		dst += ft_print_hxd(va_arg(args, "0123456789abcdef"));
	if (format == 'X')
		return (0);
	*/
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
		if (prm[i] != '%')
			data += write(1, &prm[i], 1);
		else
		{
			data += ft_formats(args, prm[i + 1]);
			i++;
		}
		i++;
	}
	va_end(args);
	return (data);
}
