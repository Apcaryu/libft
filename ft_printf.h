/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:33:30 by apellegr          #+#    #+#             */
/*   Updated: 2022/11/16 13:46:27 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *str, ...);
int		ft_printf_c(int num);
int		ft_printf_s(char *str);
int		ft_printf_d(int num);
int		ft_printf_p(long long int num);
int		ft_printf_u(unsigned int num);
int		ft_printf_hex(unsigned int num, char up_or_down);

char	*ft_hexitoa(unsigned long int n, char up_or_low);

#endif