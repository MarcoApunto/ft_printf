/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:53:03 by marferre          #+#    #+#             */
/*   Updated: 2022/09/29 14:27:28 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hxd(size_t hx)
{
	int		len;
	char	*bs;

	bs = BS_HX_MINUS;
	len = 0;
	if (hx >= 16)
	{
		ft_hxd(hx / 16);
		hx %= 16;
	}
	len++;
	ft_print_chr(bs[hx]);
	return (len);
}

int	ft_print_ptr(void *ptr)
{
	int		lnb;
	size_t	nbr;

	nbr = (size_t)ptr;
	lnb = write(1, "0x", 2);
	lnb += ft_hxd(nbr);
	return (lnb);
}