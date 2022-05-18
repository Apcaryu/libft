/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:19:07 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/05 16:54:25 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		cntr;
	const char	*str_src;
	char		*str_dest;

	cntr = 0;
	str_src = src;
	str_dest = (char *)dest;
	if (dest < src)
	{
		while (cntr < n)
		{
			str_dest[cntr] = str_src[cntr];
			cntr++;
		}
	}
	else
	{
		while (0 < n)
		{
			str_dest[n - 1] = str_src[n - 1];
			n--;
		}
	}
	return (dest);
}
