/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:58:38 by marferre          #+#    #+#             */
/*   Updated: 2022/10/01 15:58:03 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	c;

	if (size == 0)
		return (0);
	c = 0;
	while ((str1[c] && str2[c]) && (str1[c] == str2[c]) && (c < (size - 1)))
		c++;
	return ((unsigned char)str1[c] - (unsigned char)str2[c]);
}
