/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wjena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 02:49:39 by Wjena             #+#    #+#             */
/*   Updated: 2020/05/10 20:21:34 by Wjena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		j;
	long	numb;
	int		sgn;

	if (!str)
		return (0);
	j = 0;
	numb = 0;
	sgn = 1;
	while (str[j] == '\v' || str[j] == '\t' || str[j] == '\n'
	|| str[j] == '\f' || str[j] == '\r' || str[j] == ' ')
		j++;
	if (str[j] == '-' || str[j] == '+')
		if (str[j++] == '-')
			sgn = -1;
	while (str[j] >= '0' && str[j] <= '9')
	{
		if (numb > (numb * 10 + (str[j] - '0')))
			return (sgn > 0 ? -1 : 0);
		numb = (numb * 10) + (str[j++] - '0');
	}
	return ((int)(numb * sgn));
}
