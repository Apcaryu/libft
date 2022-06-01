/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:06:29 by apellegr          #+#    #+#             */
/*   Updated: 2022/06/01 17:33:53 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;
	t_list *tmp;

	tmp = lst;
	ptr = tmp;
	while (tmp)
	{
		ptr = tmp;
		tmp = tmp->next;
	}
	return (ptr);
}
