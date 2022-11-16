/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:32:30 by apellegr          #+#    #+#             */
/*   Updated: 2022/07/14 13:04:17 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	argtype_detector(char chr, va_list arg)
{
	size_t	size;

	size = 0;
	if (chr == 'c')
		size = ft_printf_c(va_arg(arg, int));
	else if (chr == 's')
		size = ft_printf_s(va_arg(arg, char *));
	else if (chr == 'p')
		size = ft_printf_p(va_arg(arg, long long int));
	else if (chr == 'd')
		size = ft_printf_d(va_arg(arg, int));
	else if (chr == 'i')
		size = ft_printf_d(va_arg(arg, int));
	else if (chr == 'u')
		size = ft_printf_u(va_arg(arg, unsigned int));
	else if (chr == 'x')
		size = ft_printf_hex(va_arg(arg, unsigned int), 'a');
	else if (chr == 'X')
		size = ft_printf_hex(va_arg(arg, unsigned int), 'A');
	else if (chr == '%')
	{
		write(1, "%", 1);
		size = 1;
	}
	return (size);
}

int	ft_printf(const char *str, ...)
{
	size_t	idx;
	size_t	size;
	size_t	cntr;
	va_list	ptr;

	idx = 0;
	size = ft_strlen(str);
	cntr = 0;
	va_start(ptr, 0);
	while (idx < size)
	{
		if (str[idx] == '%')
		{
			idx++;
			cntr += argtype_detector(str[idx], ptr);
		}
		else
		{
			ft_putchar_fd(str[idx], 1);
			cntr++;
		}
		idx++;
	}
	va_end(ptr);
	return (cntr);
}
