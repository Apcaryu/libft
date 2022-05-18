/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:01:16 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/17 19:24:54 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *nptr)
{
	int	cntr;
	int	pos;
	int	numb;

	cntr = 0;
	pos = 1;
	numb = 0;
	while ((8 < nptr[cntr] && nptr[cntr] < 14) || nptr[cntr] == ' ')
		cntr++;
	if (nptr[cntr] == '+' || nptr[cntr] == '-')
	{
		if (nptr[cntr] == '-')
			pos *= -1;
		cntr++;
	}
	
	while ('0' <= nptr[cntr] && nptr[cntr] <= '9')
	{
		numb = (numb * 10) + (nptr[cntr] - '0');
		cntr++;
	}
	return (numb * pos);
}
