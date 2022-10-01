/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:25:52 by marferre          #+#    #+#             */
/*   Updated: 2022/09/30 19:21:27 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_base(unsigned int nbr, char *bs)
{
	static int	len;

	len = 0;
	if (nbr >= ft_strlen(bs))
	{
		ft_print_base(nbr / ft_strlen(bs), bs);
		nbr %= ft_strlen(bs);
	}
	len++;
	ft_print_chr(bs[nbr]);
	return (len);
}

int	ft_print_nbr(int nbr)
{
	long long int			nb;
	static int				len;

	len = 0;
	nb = (long long int)nbr;
	if (nb < 0)
	{
		ft_print_chr('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_print_nbr(nb / 10);
		nb %= 10;
	}
	len++;
	if (nbr < 0)
		len++;
	ft_print_chr(nb + '0');
	return (len);
}
