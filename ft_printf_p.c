/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:33:25 by apellegr          #+#    #+#             */
/*   Updated: 2022/07/14 13:03:38 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(long long int num)
{
	char	*str;
	char	*strout;
	size_t	size;

	if (!num)
	{
		size = ft_strlen("(nil)");
		write(1, "(nil)", size);
		return (size);
	}
	str = ft_hexitoa(num, 'a');
	strout = ft_strjoin("0x", str);
	size = ft_printf_s(strout);
	free(str);
	free(strout);
	return (size);
}
