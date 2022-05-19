/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:58:12 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/19 14:54:13 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strout;
	size_t	cntr;
	size_t	s_size;

	s_size = ft_strlen(s);
	if (s_size < len)
		len = s_size;
	if (s_size < start)
	{
		strout = ft_calloc(1, 1);
		return (strout);
	}
	if (len > (size_t)(s_size - start))
		len = (size_t)(s_size - start);
	strout = ft_calloc(len + 1, 1);
	cntr = 0;
	if (strout == NULL)
		return (strout);
	while (cntr < len)
	{
		strout[cntr] = s[start + cntr];
		cntr++;
	}
	return (strout);
}
