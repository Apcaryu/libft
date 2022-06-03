/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:30:44 by apellegr          #+#    #+#             */
/*   Updated: 2022/06/03 17:43:11 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int		cntr;
	t_list	*ptr;

	cntr = 0;
	ptr = list;
	while (ptr)
	{
		cntr++;
		ptr = ptr->next;
	}
	return (cntr);
}
