/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:49:58 by mmerabet          #+#    #+#             */
/*   Updated: 2017/11/13 21:33:10 by mmerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinc(const char *a, char b)
{
	char	*s;

	if (a == NULL)
		return (NULL);
	if ((s = ft_strmdup(a, 1)) == NULL)
		return (NULL);
	s[ft_strlen(a)] = b;
	return (s);
}
