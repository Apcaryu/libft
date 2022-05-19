/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:43:08 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/19 14:53:46 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cntr;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	cntr = 0;
	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	while (cntr < n)
	{
		if (tmp_s1[cntr] != tmp_s2[cntr])
		{
			return (tmp_s1[cntr] - tmp_s2[cntr]);
		}
		cntr++;
	}
	return (0);
}
