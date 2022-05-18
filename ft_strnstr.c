/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:03:42 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/17 19:02:13 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	cntr;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	if (len == 0)
		return (0);
	if (ft_strlen(little) < len)
		len = ft_strlen(little);
	cntr = 0;
	while (big[cntr + ft_strlen(little) - 1] != '\0')
	{
		if (!(ft_strncmp((big + cntr), little, ft_strlen(little))))
			return ((char *)(big + cntr));
		cntr++;
	}
	return (NULL);
}
