/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:20:10 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/05 13:32:34 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	cntr;
	char	*str_src;
	char	*str_dest;

	cntr = 0;
	str_src = (char *)src;
	str_dest = (char *)dest;
	while (cntr < n)
	{
		str_dest[cntr] = str_src[cntr];
		cntr++;
	}
	return (dest);
}
