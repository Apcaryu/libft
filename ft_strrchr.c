/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:52:05 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/16 19:24:06 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		cntr;
	char	*tmp;

	cntr = ft_strlen(s);
	tmp = (char *)s;
	while (cntr >= 0)
	{
		if (tmp[cntr] == (char)c)
			return (tmp + cntr);
		cntr--;
	}
	return (NULL);
}
