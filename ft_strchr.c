/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:29:42 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/16 18:59:02 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			cntr;
	char	*tmp;

	cntr = 0;
	tmp = (char *)s;
	while (cntr <= ft_strlen(s))
	{
		if (s[cntr] == (char)c)
			return (tmp + cntr);
		cntr++;
	}
	return (NULL);
}
