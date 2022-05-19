/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:25:23 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/19 14:54:23 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	char	*strout;
	size_t	idx;

	size = ft_strlen(s);
	strout = ft_calloc(size + 1, 1);
	if (strout == NULL)
		return (NULL);
	idx = 0;
	while (idx < size)
	{
		strout[idx] = (*f)(idx, s[idx]);
		idx++;
	}
	strout[idx] = '\0';
	return (strout);
}
