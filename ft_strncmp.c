/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:42:06 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/31 14:50:23 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	cntr;

	cntr = 0;
	if ((s1[0] != '\0' || s2[0] != '\0') && cntr < n)
	{
		while (((unsigned char)s1[cntr] || (unsigned char)s2[cntr]) && cntr < n)
		{
			if ((unsigned char)s1[cntr] != (unsigned char)s2[cntr])
			{
				return ((unsigned char)s1[cntr] - (unsigned char)s2[cntr]);
			}
			cntr++;
		}
	}
	return (0);
}
