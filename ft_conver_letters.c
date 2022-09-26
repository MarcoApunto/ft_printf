/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_letters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:45:18 by marferre          #+#    #+#             */
/*   Updated: 2022/09/26 22:04:10 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* print string */
int	ft_print_str(char const *s)
{
	write(1, &*s, ft_strlen(s));
	return (ft_strlen(s));
}
/*
print char
int	ft_print_char(char const c)
{
	if (c != 'c')
		return (-1);
}

print %
int	ft_print_pcent(char const p)
{
	if (p != '%')
		return (-1);
}
*/