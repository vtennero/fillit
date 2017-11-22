/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 20:30:51 by mmerabet          #+#    #+#             */
/*   Updated: 2017/11/15 13:05:40 by mmerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	**elem;

	newlst = NULL;
	while (lst && f)
	{
		if (newlst)
		{
			*elem = f(lst);
			elem = &(*elem)->next;
		}
		else
		{
			newlst = f(lst);
			elem = &newlst->next;
		}
		lst = lst->next;
	}
	return (newlst);
}
