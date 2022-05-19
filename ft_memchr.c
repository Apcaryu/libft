/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:23:17 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/19 14:56:58 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cntr;
	unsigned char	*tmp;
	unsigned char	chr;

	cntr = 0;
	tmp = (unsigned char *)s;
	chr = (unsigned char)c;
	while (cntr < n)
	{
		if (tmp[cntr] == chr)
			return ((void *)(tmp + cntr));
		cntr++;
	}
	return (NULL);
}
