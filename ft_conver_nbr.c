/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:25:52 by marferre          #+#    #+#             */
/*   Updated: 2022/09/27 20:38:45 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_nbr(int nbr)
{
	int				len;
	long long int	nb;

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
	ft_print_chr(nb + '0');
	return (len);
}
