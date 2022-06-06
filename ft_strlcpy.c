/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:58:00 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/17 12:48:10 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cntr;

	cntr = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (cntr < (size - 1) && src[cntr] != '\0')
	{
		dst[cntr] = src[cntr];
		cntr++;
	}
	dst[cntr] = '\0';
	return (ft_strlen(src));
}
