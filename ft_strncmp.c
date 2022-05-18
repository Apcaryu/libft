/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:42:06 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/04 15:17:47 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	cntr;

	cntr = 0;
	if ((s1[0] != '\0' || s2[0] != '\0') && cntr < n)
	{
		while ((s1[cntr] || s2[cntr]) && cntr < n)
		{
			if (s1[cntr] != s2[cntr])
			{
				return (s1[cntr] - s2[cntr]);
			}
			cntr++;
		}
	}
	return (0);
}
