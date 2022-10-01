/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:09:58 by marferre          #+#    #+#             */
/*   Updated: 2022/10/01 15:58:06 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	i2;
	size_t	found;

	if (!str && !len)
		return (0);
	i = 0;
	if (!(to_find[i]))
		return ((char *)str);
	while (str[i])
	{
		found = 0;
		if (str[i] == to_find[found])
		{
			i2 = i;
			while ((str[i] == to_find[found++]) && (i++ < len))
			{
				if (!(to_find[found]))
					return ((char *)str + i2);
			}
			i = i2;
		}
		i++;
	}
	return (0);
}
