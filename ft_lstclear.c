/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:19:35 by apellegr          #+#    #+#             */
/*   Updated: 2022/06/22 19:53:11 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*target;

	if (lst)
	{
		target = *lst;
		while (target)
		{
			target = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = target;
		}
	}
}
