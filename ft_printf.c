/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:37:47 by marferre          #+#    #+#             */
/*   Updated: 2022/09/27 20:56:37 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
	if (format == 'd' || format == 'i')
		dst += ft_print_nbr(va_arg(args, int));
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
		{
			data += write(1, &prm[i], 1);
		}
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

int	main(void)
{
	ft_printf("my str: %s, my num: %i, my %%, my chr: %c", "hola", -2147483648, 'f');
}
