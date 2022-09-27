/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_letters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:45:18 by marferre          #+#    #+#             */
/*   Updated: 2022/09/27 19:12:31 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* print string */
int	ft_print_str(char const *s)
{
	write(1, &*s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_print_chr(char const c)
{
	write(1, &c, 1);
	return (1);
}
