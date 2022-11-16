/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:13:28 by apellegr          #+#    #+#             */
/*   Updated: 2022/06/10 15:43:05 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int dec)
{
	char	*nb_txt;
	int		size;

	nb_txt = ft_itoa(dec);
	size = ft_printf_s(nb_txt);
	free(nb_txt);
	return (size);
}
