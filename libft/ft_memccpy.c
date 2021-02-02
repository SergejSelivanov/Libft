/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wjena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 02:49:39 by Wjena             #+#    #+#             */
/*   Updated: 2020/05/08 02:51:31 by Wjena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		*ptr1;
	size_t				i;

	if (!dest || !source)
		return (NULL);
	ptr = (unsigned char *)source;
	ptr1 = (unsigned char *)dest;
	i = 0;
	while (i < n && ptr[i])
	{
		if (ptr[i] == (unsigned char)c)
		{
			ptr1[i] = ptr[i];
			return (dest + i + 1);
		}
		ptr1[i] = ptr[i];
		i++;
	}
	return (NULL);
}
