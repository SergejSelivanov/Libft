/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wjena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 02:49:39 by Wjena             #+#    #+#             */
/*   Updated: 2020/05/08 02:51:31 by Wjena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	char	*ptr;
	char	*ptr1;
	size_t	i;

	if (!dest || !source)
		return (NULL);
	ptr = (char *)dest;
	ptr1 = (char *)source;
	i = 0;
	if (ptr > ptr1)
	{
		while ((int)n-- > 0 && ptr && ptr1)
		{
			ptr[n] = ptr1[n];
		}
	}
	else
	{
		while (i < n && ptr && ptr1)
		{
			ptr[i] = ptr1[i];
			i++;
		}
	}
	return (dest);
}
