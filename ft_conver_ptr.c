/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:53:03 by marferre          #+#    #+#             */
/*   Updated: 2022/09/28 15:52:19 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hxd(size_t hx)
{
	int		len;
	char	*bs;

	bs = "0123456789abcef";
	len = 0;
	while (hx >= 16)
	{
		ft_hxd(hx / 16);
		hx %= 16;
	}
	len++;
	ft_print_chr(bs[hx]);
	return (len);
}

int	ft_print_ptr(void *p)
{
	int		lnb;
	size_t	nbr;

	nbr = (size_t)p;
	lnb = write(1, "0x", 2);
	lnb += ft_hxd(nbr);
	return (lnb);
}