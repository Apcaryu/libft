/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:25:48 by apellegr          #+#    #+#             */
/*   Updated: 2022/07/14 12:45:35 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_rev_int_tab(char *tab, int size)
{
	int		counter;
	char	buf;

	counter = 0;
	size--;
	buf = 0;
	while (counter < size)
	{
		buf = tab[counter];
		tab[counter] = tab[size];
		tab[size] = buf;
		counter++;
		size--;
	}
}

static int	size_of_tab(unsigned long int n)
{
	int	cntr;

	cntr = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		cntr++;
	}
	return (cntr);
}

static void	do_it(char *strout, unsigned long int n, int size, char up_or_low)
{
	int				idx;
	long long int	resmod;

	idx = 0;
	while (idx < size)
	{
		resmod = n % 16;
		if (resmod > 9)
			strout[idx] = up_or_low + resmod - 10;
		else
			strout[idx] = '0' + (n % 16);
		n /= 16;
		idx++;
	}
	strout[idx] = '\0';
}

char	*ft_hexitoa(unsigned long int n, char up_or_low)
{
	char	*strout;
	int		size;

	size = size_of_tab(n);
	strout = ft_calloc(1, size + 1);
	if (!strout)
		return (NULL);
	do_it(strout, n, size, up_or_low);
	ft_rev_int_tab(strout, size);
	return (strout);
}
