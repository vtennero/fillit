/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:22:48 by mmerabet          #+#    #+#             */
/*   Updated: 2017/11/19 17:01:56 by mmerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushfront(t_list **alst, t_list *elem)
{
	if (alst && elem)
	{
		elem = ft_lstend(elem);
		elem->next = *alst;
		if (*alst)
			(*alst)->parent = elem;
		*alst = elem;
	}
}
