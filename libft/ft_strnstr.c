/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wjena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 02:49:39 by Wjena             #+#    #+#             */
/*   Updated: 2020/05/08 02:51:31 by Wjena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t k)
{
	size_t pos;
	size_t i;

	if (!big)
		return (NULL);
	if (!little[0])
		return ((char *)big);
	pos = 0;
	while (big[pos] && pos < k)
	{
		if (big[pos] == little[0])
		{
			i = 1;
			while (little[i] && big[pos + i] == little[i] && (pos + i) <= k)
				i++;
			if (little[i] == '\0')
				return ((char *)big + pos);
		}
		pos++;
	}
	return (NULL);
}
