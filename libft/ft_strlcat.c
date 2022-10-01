/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:46:26 by marferre          #+#    #+#             */
/*   Updated: 2022/10/01 15:57:56 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	ldst;
	size_t	lsrc;

	if (!dst && size == 0)
		return (0);
	lsrc = ft_strlen(src);
	if (size == 0)
		return (lsrc);
	ldst = ft_strlen(dst);
	c = 0;
	if (size < (ldst + 1))
		return (lsrc + size);
	while ((src[c]) && (c < (size - ldst - 1)))
	{
		dst[c + ldst] = src[c];
		c++;
	}
	dst[c + ldst] = '\0';
	return (lsrc + ldst);
}
