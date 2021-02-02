/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wjena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 02:49:39 by Wjena             #+#    #+#             */
/*   Updated: 2020/05/08 02:51:31 by Wjena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*a;
	int		j;

	j = 0;
	i = 0;
	if (!src)
		return (NULL);
	while (src[i] != '\0')
		i++;
	if (!(a = (char*)malloc(i + 1)))
		return (NULL);
	while (src[j] != '\0')
	{
		a[j] = src[j];
		j++;
	}
	a[j] = '\0';
	return (a);
}
