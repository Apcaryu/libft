/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:32:19 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/18 12:08:00 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	cntr;
	size_t	s_size;
	char	*dup;

	s_size = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * s_size + 1);
	if (dup == NULL)
		return (NULL);
	cntr = 0;
	while (cntr <= s_size)
	{
		dup[cntr] = s[cntr];
		cntr++;
	}
	return (dup);
}
