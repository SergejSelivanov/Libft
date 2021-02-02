/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wjena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 02:49:39 by Wjena             #+#    #+#             */
/*   Updated: 2020/05/08 02:51:31 by Wjena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	if (ch == '\0')
		return ((char *)str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == ch)
			j = i;
		i++;
	}
	if (j == 0)
	{
		if (str[0] == ch)
			return ((char *)str);
		else
			return (NULL);
	}
	return ((char *)str + j);
}
