/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:57:55 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/25 15:58:01 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int the_words(char const *s, char c, size_t nb_words, size_t idx)
{
	size_t size;
	int    isWord;

	size = ft_strlen(s);
	isWord = 0;
	while (idx < size)
	{
		if (s[idx] != c)
			isWord = 1;
		while (s[idx] == c)
		{
			if (size <= idx)
				break;
	  		idx++;
	  		if (s[idx] != c && s[idx] != '\0')
				nb_words++;
		}
		idx++;
		if (isWord && idx >= size && nb_words < 1)
	  		nb_words++;
	}
	return (nb_words);
}

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
	char	*tmp_ptr_start;
	char	*tmp_ptr_end;

	tmp_ptr_end = s;
	tmp_ptr_start = cuter_detector(tmp_ptr_end, c);
	if (tmp_ptr_start == NULL)
		return (NULL);
	tmp_ptr_end = ft_strchr(cuter_detector((tmp_ptr_start), c), c);
	if (tmp_ptr_end == NULL)
	{
		tab[*cntr] = ft_calloc(sizeof(char), ft_strlen(tmp_ptr_start) + 1);
		ft_strlcpy(tab[*cntr], tmp_ptr_start, ft_strlen(tmp_ptr_start) + 1);
	}
	else
	{
		tab[*cntr] = ft_calloc(sizeof(char), (size_t)(tmp_ptr_end - tmp_ptr_start) + 1);
		ft_strlcpy(tab[*cntr], tmp_ptr_start, (size_t)(tmp_ptr_end - tmp_ptr_start) + 1);
	}
	return (tmp_ptr_end);
}

char	**ft_split(char const *s, char c)
{
	size_t	idx;
	size_t	nb_word;
	char	**tabout;
	char	*tmp;

	tmp = (char *)s;
	nb_word = the_words(s, c, 0, 0);
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
