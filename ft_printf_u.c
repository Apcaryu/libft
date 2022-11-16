/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:39:55 by apellegr          #+#    #+#             */
/*   Updated: 2022/06/10 17:17:09 by apellegr         ###   ########.fr       */
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

static int	size_of_tab(unsigned int n)
{
	int	cntr;

	cntr = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		cntr++;
	}
	return (cntr);
}

static void	do_it(char *strout, unsigned int n, int size)
{
	int				idx;
	long long int	resmod;

	idx = 0;
	while (idx < size)
	{
		resmod = n % 10;
		if (resmod > 9)
			strout[idx] = 'a' + resmod - 10;
		else
			strout[idx] = '0' + (n % 10);
		n /= 10;
		idx++;
	}
	strout[idx] = '\0';
}

static char	*ft_uitoa(unsigned int n)
{
	char	*strout;
	int		size;

	size = size_of_tab(n);
	strout = malloc(size + 1);
	if (!strout)
		return (NULL);
	do_it(strout, n, size);
	if (strout[0] == '-')
		ft_rev_int_tab(strout + 1, size - 1);
	else
		ft_rev_int_tab(strout, size);
	return (strout);
}

int	ft_printf_u(unsigned int num)
{
	char	*nb_txt;
	int		size;

	nb_txt = ft_uitoa(num);
	size = ft_printf_s(nb_txt);
	free(nb_txt);
	return (size);
}
