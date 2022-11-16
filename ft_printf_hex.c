/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:56:22 by apellegr          #+#    #+#             */
/*   Updated: 2022/07/14 12:59:40 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned int num, char up_or_down)
{
	char	*str;
	size_t	size;

	str = ft_hexitoa(num, up_or_down);
	size = ft_printf_s(str);
	free(str);
	return (size);
}
