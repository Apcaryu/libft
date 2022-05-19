/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:57:55 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/19 16:13:57 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	the_words(char const *s, char c)
{
	int	idx;
	int	nb_word;

	idx = 0;
	nb_word = 1;
	while (s[idx] != '\0')
	{
		if (s[idx] == c && s[idx - 1] != c)
			nb_word++;
		idx++;
	}
	return (nb_word);
}

static char	*in_the_tab(char *s, size_t *cntr, char c)
{
	char	*strout;
	int		internal_cntr;
	int		in_cntr;

	internal_cntr = 0;
	in_cntr = *cntr;
	while (!ft_strchr((s + *cntr), (int)c) && *cntr < ft_strlen(s))
	{
		internal_cntr++;
		*cntr += 1;
	}
	strout = ft_calloc(sizeof(char), internal_cntr + 1);
	if (strout == NULL)
		return (NULL);
	ft_strlcpy(strout, s + in_cntr, internal_cntr + 1);
	return (strout);
}

char	**ft_split(char const *s, char c)
{
	int		idx;
	int		nb_word;
	char	**tabout;
	int		word_cntr;

	nb_word = the_words(s, c);
	tabout = ft_calloc(sizeof(char *), nb_word);
	if (tabout == NULL)
		return (NULL);
	idx = 0;
	word_cntr = 0;
	while (word_cntr < nb_word)
	{
		tabout[word_cntr] = in_the_tab((char *)s, (size_t *)&idx, c);
		if (tabout[word_cntr] == NULL)
			return (NULL);
		word_cntr++;
		idx++;
	}
	return (tabout);
}
