/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:20:41 by marferre          #+#    #+#             */
/*   Updated: 2022/10/01 15:58:09 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	b_len;
	char	*dst;

	if (!s1 || !set)
		return (0);
	b_len = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[b_len - 1]) && s1[b_len - 1] && b_len > i)
		b_len--;
	dst = malloc(sizeof(char) * (b_len - i + 1));
	if (!dst)
		return (0);
	ft_strlcpy(dst, &s1[i], b_len - i + 1);
	return (dst);
}
