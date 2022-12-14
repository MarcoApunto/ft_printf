/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:50:18 by marferre          #+#    #+#             */
/*   Updated: 2022/10/02 12:40:12 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int tu)
{
	if (tu >= 'a' && tu <= 'z')
		tu -= ('a' - 'A');
	return (tu);
}
