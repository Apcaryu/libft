/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:57:55 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/20 17:02:07 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// Permet de connaitre la taille d'un mot a partir du pointeur de sa premiere 
//lettre et de sa derniere lettre
size_t	size_of_word(char *chr_start, char *chr_end)
{
	return ((size_t)(chr_end - chr_start));
}

char	*cuter_detector(char *s, char c)
{
	size_t idx;
	size_t size;

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

size_t nb_of_words(char *s, char c)
{
	int		fst_start;
	size_t	nb_word;
	char	*tmp_ptr_start;
	char	*tmp_ptr_end;

	tmp_ptr_end = s;
	nb_word = 0;
	fst_start = 1;
	while (tmp_ptr_end != NULL || fst_start)
	{
		fst_start = 0;
		nb_word++;
		tmp_ptr_start = cuter_detector(tmp_ptr_end, c);
		//printf("\033[35m%s\n", tmp_ptr_start);
		if (tmp_ptr_start == NULL)
		 	break;
		tmp_ptr_end = ft_strchr(cuter_detector((tmp_ptr_start), c), c);
		//printf("\033[36m%s\n", tmp_ptr_end);
		//printf("\033[31mchr_start = %c\nchr_end = %c\nsize = %ld\n",tmp_ptr_start[0], tmp_ptr_end[0], size_of_word(tmp_ptr_start, tmp_ptr_end));
	}
	return (nb_word);
}

char	**ft_split(char const *s, char c)
{
	char **strout;
	(void)c;
	printf("chr_start = %c\nchr_end = %c\nsize = %ld\n",s[9], s[18], size_of_word((char *)(s + 9), (char *)(s + 18)));
	printf("\033[33m%ld\n", nb_of_words((char *)s, c));
	// recuperer le nombre de mots
	// malloc le nombres mots
	// a chaque emplacement malloc le mot a la bonne taille
	// si tout est bien alloue
	// 	continuer
	// sinon 
	// 	free tous ce qui a ete malloc
	strout = ft_calloc(1, 1);
	strout[0] = ft_calloc(1, 1);
	return (strout);
}
