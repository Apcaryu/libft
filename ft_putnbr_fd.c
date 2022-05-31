/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:23:26 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/31 17:51:33 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

void	set_tab(char *s, size_t idx, size_t pos_writer, char is_num)
{
	if (s[0] == '-')
	{
		idx++;
		pos_writer++;
	}
	while (s[idx] == '0')
		idx++;
	while (idx < 11)
	{
		s[pos_writer] = s[idx];
		idx++;
		pos_writer++;
		is_num = 1;
	}
	if (!is_num)
	{
		s[pos_writer] = '0';
		pos_writer++;
	}
	s[pos_writer] = '\0';
}

void	ft_putnbr_fd(int n, int fd)
{
	char	strout[11];

	do_it(strout, n, 11);
	if (strout[0] == '-')
		ft_rev_int_tab(strout + 1, 11 - 1);
	else
		ft_rev_int_tab(strout, 11);
	set_tab(strout, 0, 0, 0);
	write(fd, strout, ft_strlen(strout));
}
