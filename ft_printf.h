/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:38:57 by marferre          #+#    #+#             */
/*   Updated: 2022/09/29 12:32:53 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

# define BS_DEC "0123456789"
# define BS_HX_MAYUS "0123456789ABCDEF"
# define BS_HX_MINUS "0123456789abcdef"

int				ft_printf(char const *printf, ...);
int				ft_print_base(unsigned int nbr, char *bs);
int				ft_print_str(char const *s);
int				ft_print_chr(char const c);
int				ft_print_nbr(int nbr);
int				ft_print_ptr(void *ptr);

#endif
