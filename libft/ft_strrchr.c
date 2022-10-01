/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:05:11 by marferre          #+#    #+#             */
/*   Updated: 2022/10/01 15:58:07 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen((char *)str);
	str += len;
	while (len >= 0)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		len--;
		str--;
	}
	if (!c)
		return ((char *)str);
	return (0);
}
