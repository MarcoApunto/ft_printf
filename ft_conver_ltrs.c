/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_ltrs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:45:18 by marferre          #+#    #+#             */
/*   Updated: 2022/09/29 11:42:27 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char const *s)
{
	if (!s)
	{
		ft_print_str("(null)");
		return (6);
	}
	write(1, &*s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_print_chr(char const c)
{
	write(1, &c, 1);
	return (1);
}
