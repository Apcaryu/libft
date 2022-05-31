/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:03:42 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/31 15:56:51 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx;
	size_t	s_little;

	s_little = ft_strlen(little);
	if (s_little == 0)
		return ((char *)big);
	if (len == 0)
		return (0);
	idx = 0;
	while (big[idx + s_little - 1] != '\0' && (idx + ft_strlen(little)) <= len)
	{
		if (!(ft_strncmp((big + idx), little, ft_strlen(little))))
			return ((char *)(big + idx));
		idx++;
	}
	return (NULL);
}
