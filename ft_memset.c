/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:01:59 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/05 12:44:14 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	cntr;
	char	*str;

	cntr = 0;
	str = (char *)s;
	while (cntr < n)
	{
		str[cntr] = c;
		cntr++;
	}
	return (s);
}
