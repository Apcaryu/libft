/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:43:17 by apellegr          #+#    #+#             */
/*   Updated: 2022/06/03 17:21:42 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*lstout;

	if (lst && f && del)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp)
		{
			lstout = tmp;
			lst = lst->next;
			while (lst)
			{
				tmp = ft_lstnew(f(lst->content));
				if (!tmp)
				{
					ft_lstclear(&lstout, del);
					return (NULL);
				}
				ft_lstadd_back(&lstout, tmp);
				lst = lst->next;
			}
			return (lstout);
		}
	}
	return (NULL);
}
