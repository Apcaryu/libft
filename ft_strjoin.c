/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:55:29 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/18 16:15:53 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strout;
	size_t	sizetab;
	int		cntr;
	size_t	subcntr;

	sizetab = ft_strlen(s1) + ft_strlen(s2);
	strout = ft_calloc(sizetab + 1, 1);
	cntr = 0;
	subcntr = 0;
	if (strout == NULL)
		return (strout);
	while (subcntr < ft_strlen(s1))
	{
		strout[cntr] = s1[subcntr];
		subcntr++;
		cntr++;
	}
	subcntr = 0;
	while (subcntr < ft_strlen(s2))
	{
		strout[cntr] = s2[subcntr];
		subcntr++;
		cntr++;
	}
	return (strout);
}
