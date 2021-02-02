/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wjena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 14:58:06 by Wjena             #+#    #+#             */
/*   Updated: 2020/05/09 14:58:10 by Wjena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *a;
	t_list *b;

	if (lst && del && *lst)
	{
		a = *lst;
		while (a != NULL)
		{
			b = a->next;
			(*del)(a->content);
			free(a);
			a = b;
		}
		*lst = NULL;
	}
}
