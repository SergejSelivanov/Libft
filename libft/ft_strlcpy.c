/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wjena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 02:49:39 by Wjena             #+#    #+#             */
/*   Updated: 2020/05/08 02:51:31 by Wjena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_cs(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static void		ft_fill(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen_cs(src))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

size_t			ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (src == NULL || dst == NULL)
		return (0);
	if (size == 0)
		return (ft_strlen_cs(src));
	if (size <= ft_strlen_cs(src))
	{
		while (i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	else
	{
		ft_fill(dst, src);
	}
	return (ft_strlen_cs(src));
}
