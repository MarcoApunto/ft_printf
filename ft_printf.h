/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:38:57 by marferre          #+#    #+#             */
/*   Updated: 2022/09/28 15:13:02 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(char const *printf, ...);
int	ft_print_str(char const *s);
int	ft_print_chr(char const c);
int	ft_print_nbr(int nbr);
int	ft_print_ptr(void *p);

#endif
