/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:14:20 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/13 19:45:24 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static int	size_of_tab(int n)
{
	int	cntr;

	cntr = 0;
	if (n < 0)
		cntr++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		cntr++;
	}
	return (cntr);
}

static void	do_it(char *strout, int n, int size)
{
	int	idx;

	idx = 0;
	if (n < 0)
	{
		strout[0] = '-';
		idx++;
	}
	while (idx < size)
	{
		if (n < 0)
			strout[idx] = '0' + (n % 10) * -1;
		else
			strout[idx] = '0' + (n % 10);
		n /= 10;
		idx++;
	}
	strout[idx] = '\0';
}

char	*ft_itoa(int n)
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
