/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:24:06 by marferre          #+#    #+#             */
/*   Updated: 2022/10/01 15:57:47 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_many_words(const char *s, char c)
{
	int	mw;
	int	bln;

	mw = 0;
	bln = 0;
	while (*s)
	{
		if (*s != c && bln == 0)
		{
			bln = 1;
			mw++;
		}
		else if (*s == c)
			bln = 0;
		s++;
	}
	return (mw);
}

static void	ft_check_malloc(char **dst, int j, int *sprt)
{
	if (!dst)
	{
		while (--j >= 0)
			free(dst[j]);
		free(dst);
	}
	(*sprt) = -1;
}

static char	*ft_malloc_things(char const *s, int sprt, int i)
{
	char	*dst;
	int		j;

	dst = malloc(sizeof(char) * ((i - sprt) + 1));
	if (!dst)
		return (0);
	j = 0;
	while (sprt < i)
	{
		dst[j] = s[sprt];
		j++;
		sprt++;
	}
	dst[j] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		sprt;
	char	**dst;

	if (!s)
		return (0);
	dst = malloc(sizeof(char *) * (ft_many_words(s, c) + 1));
	if (!dst)
		return (0);
	i = 0;
	j = 0;
	sprt = -1;
	while ((size_t)i <= ft_strlen(s))
	{
		if ((s[i] == c || (size_t)i == ft_strlen(s)) && sprt >= 0)
			dst[j++] = ft_malloc_things(s, sprt, i);
		if ((s[i] == c || (size_t)i == ft_strlen(s)) && sprt >= 0)
			ft_check_malloc(dst, j, &sprt);
		if (s[i] != c && sprt < 0)
			sprt = i;
		i++;
	}
	dst[j] = NULL;
	return (dst);
}
