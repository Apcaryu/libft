/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:57:55 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/26 12:14:08 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	the_words(char const *s, char c)
{
	size_t	size;
	size_t	idx;
	size_t	nb_words;
	char	is_word;

	size = ft_strlen(s);
	idx = 0;
	nb_words = 0;
	while (idx < size)
	{
		while (s[idx] == c)
		{
			idx++;
			is_word = 1;
		}
		while (s[idx] != c)
		{
			idx++;
			is_word = 0;
		}
		if (is_word == 0)
		{
			nb_words++;
		}
		is_word = 0;
		idx++;
	}
	return (nb_words);
}
/*
int	the_words(char const *s, char c, size_t nb_words, size_t idx)
{
	size_t	size;
	int		is_word;

	size = ft_strlen(s);
	is_word = 0;
	while (idx < size)
	{
		if (s[idx] != c)
			is_word = 1;
		while (s[idx] == c)
		{
			if (size <= idx)
				break ;
			idx++;
			if (s[idx] != c && s[idx] != '\0')
				nb_words++;
		}
		idx++;
		if (is_word && idx >= size && nb_words < 1)
			nb_words++;
	}
	return (nb_words);
}
*/
static char	*cuter_detector(char *s, char c)
{
	size_t	idx;
	size_t	size;

	idx = 0;
	size = ft_strlen(s);
	while (s[idx] == c)
	{
		if (size <= idx)
			return (NULL);
		idx++;
	}
	return (s + idx);
}

static char	*in_the_tab(char *s, size_t *cntr, char c, char **tab)
{
	char	*tp_start;
	char	*tp_end;

	tp_end = s;
	tp_start = cuter_detector(tp_end, c);
	if (tp_start == NULL)
		return (NULL);
	tp_end = ft_strchr(cuter_detector((tp_start), c), c);
	if (tp_end == NULL)
	{
		tab[*cntr] = ft_calloc(sizeof(char), ft_strlen(tp_start) + 1);
		ft_strlcpy(tab[*cntr], tp_start, ft_strlen(tp_start) + 1);
	}
	else
	{
		tab[*cntr] = ft_calloc(sizeof(char), (size_t)(tp_end - tp_start) + 1);
		ft_strlcpy(tab[*cntr], tp_start, (size_t)(tp_end - tp_start) + 1);
	}
	return (tp_end);
}

char	**ft_split(char const *s, char c)
{
	size_t	idx;
	size_t	nb_word;
	char	**tabout;
	char	*tmp;

	tmp = (char *)s;
	nb_word = the_words(s, c);
	tabout = ft_calloc(sizeof(char *), nb_word + 1);
	if (tabout == NULL)
		return (NULL);
	idx = 0;
	while (idx < nb_word)
	{
		tmp = in_the_tab(tmp, &idx, c, tabout);
		if (tabout[idx] == NULL)
			return (NULL);
		idx++;
	}
	return (tabout);
}
