/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:00:49 by apellegr          #+#    #+#             */
/*   Updated: 2022/07/14 12:54:47 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *str)
{
	size_t	size;

	if (!str)
	{
		size = ft_strlen("(null)");
		write(1, "(null)", size);
		return (size);
	}
	size = ft_strlen(str);
	write(1, str, size);
	return (size);
}
