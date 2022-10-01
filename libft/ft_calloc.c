/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:41:23 by marferre          #+#    #+#             */
/*   Updated: 2022/10/01 15:56:56 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t items, size_t size)
{
	void	*ptr;

	ptr = malloc(items * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, items * size);
	return (ptr);
}
