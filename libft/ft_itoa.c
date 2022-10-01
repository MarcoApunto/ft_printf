/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:43:22 by marferre          #+#    #+#             */
/*   Updated: 2022/10/01 15:57:15 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_many_nbr(long int n)
{
	size_t	i;

	i = 0;
	if (n == 0 || n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	mn;
	long int	nbr;
	char		*dst;

	i = 0;
	nbr = n;
	mn = ft_many_nbr(nbr);
	dst = malloc(sizeof(char) * (mn + 1));
	if (!dst)
		return (0);
	if (n < 0)
	{
		nbr = -nbr;
		dst[0] = '-';
		i++;
	}
	dst[mn] = '\0';
	while (mn > i)
	{
		dst[mn - 1] = nbr % 10 + '0';
		nbr /= 10;
		mn--;
	}
	return (dst);
}
