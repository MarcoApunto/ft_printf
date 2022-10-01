/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:34:15 by marferre          #+#    #+#             */
/*   Updated: 2022/10/01 15:56:51 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long long int	ft_check_long(int x, unsigned long long int y)
{
	unsigned long long int	lngn;

	lngn = 9223372036854775806;
	if (y > lngn && x > 0)
		return (-1);
	if (y > lngn + 1 && x < 0)
		return (0);
	return (y);
}

int	ft_atoi(const char *str)
{
	int						c;
	int						x;
	unsigned long long int	y;

	c = 0;
	x = 1;
	y = 0;
	while ((str[c] >= 9 && str[c] <= 13) || str[c] == 32)
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			x *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		y = (str[c] - '0') + (y * 10);
		c++;
	}
	y = ft_check_long(x, y);
	return (x * y);
}
