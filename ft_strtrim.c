/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:27:30 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/18 16:41:53 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_cntr;
	int		end_cntr;
	char	*strout;

	start_cntr = 0;
	end_cntr = ft_strlen(s1);
	while (ft_strchr(set, s1[start_cntr]))
		start_cntr++;
	if (end_cntr < start_cntr)
	{
		strout = ft_calloc(1, 1);
		return (strout);
	}
	while (ft_strchr(set, s1[end_cntr - 1]) && end_cntr > start_cntr)
		end_cntr--;
	strout = (char *)ft_calloc(sizeof(char), end_cntr - start_cntr + 1);
	if (strout == NULL)
		return (NULL);
	ft_strlcpy(strout, s1 + start_cntr, end_cntr - start_cntr + 1);
	return (strout);
}
