/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wjena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 02:49:39 by Wjena             #+#    #+#             */
/*   Updated: 2020/05/10 20:09:11 by Wjena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char		*ptr;
	unsigned int	i;
	char			*arr;

	ptr = s;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		if (!(arr = (char*)malloc(sizeof(char))))
			return (NULL);
		arr[0] = '\0';
		return (arr);
	}
	if (!(arr = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (len > 0 && ptr[start] != '\0')
	{
		arr[i++] = ptr[start++];
		len--;
	}
	arr[i] = '\0';
	return (arr);
}
