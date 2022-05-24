/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:57:55 by apellegr          #+#    #+#             */
/*   Updated: 2022/05/24 17:49:38 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
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

void	freezer(char **tab, size_t size)
{
	size_t	cntr;

	cntr = 0;
	while (cntr < size)
	{
		free(tab[cntr]);
		cntr++;
	}
	free(tab);
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
	strout = ft_calloc(10, 10);
	strout[0] = ft_calloc(10, 10);
	freezer(strout, 1);
	return (strout);
}
*/

/*
static int    the_words(char const *s, char c)
{
    int    idx;
    int    nb_word;
    size_t size;

    idx = 0;
    nb_word = 1;
    size = ft_strlen(s);
    while (s[idx] != '\0')
    {
      while (s[idx] == c)
      {
        if (size <= idx)
          break;
        idx++;
        if (s[idx] != c)
          nb_word++;
      }
      idx++;
    }
    return (nb_word);
}

char    *cuter_detector(char *s, char c)
{
    size_t idx;
    size_t size;

    idx = 0;
    size = strlen(s);
    while (s[idx] == c)
    {
        if (size <= idx)
            return (NULL);
        idx++;
    }
    return (s + idx);
}

static char    *in_the_tab(char *s, size_t *cntr, char c)
{
    char    *strout;
    int        fst_start;
    size_t    nb_word;
    char    *tmp_ptr_start;
    char    *tmp_ptr_end;

    tmp_ptr_end = s;
    nb_word = 0;
    fst_start = 1;
    while (tmp_ptr_end != NULL || fst_start)
    {
        fst_start = 0;
        nb_word++;
        tmp_ptr_start = cuter_detector(tmp_ptr_end, c);
        if (tmp_ptr_start == NULL)
             break;
        tmp_ptr_end = strchr(cuter_detector((tmp_ptr_start), c), c);
        if (tmp_ptr_end == NULL)
        {
          strout[nb_word - 1] = calloc(sizeof(char), strlen(tmp_ptr_start));
          ft_strlcpy(strout, tmp_ptr_start, strlen(tmp_ptr_start));
        }
        else
        {
          strout[nb_word - 1] = calloc(sizeof(char), (size_t)(tmp_ptr_end - tmp_ptr_start));
          ft_strlcpy(strout, tmp_ptr_start, (size_t)(tmp_ptr_end - tmp_ptr_start));
        }
    }
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
*/

/*
#include <stdlib.h>

size_t    ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t    cntr;

    cntr = 0;
    if (size == 0)
        return (strlen(src));
    while (cntr < (size - 1) && src[cntr] != '\0')
    {
        dst[cntr] = src[cntr];
        cntr++;
    }
    dst[cntr] = '\0';
    return (strlen(src));
}

// -----Debut de split-----

static int    the_words(char const *s, char c)
{
    int    idx;
    int    nb_word;
    size_t size;

    idx = 0;
    nb_word = 1;
    size = strlen(s);
    while (s[idx] != '\0')
    {
      while (s[idx] == c)
      {
        if (size <= idx)
          break;
        idx++;
        if (s[idx] != c)
          nb_word++;
      }
      idx++;
    }
    return (nb_word);
}

char    *cuter_detector(char *s, char c)
{
    size_t idx;
    size_t size;

    idx = 0;
    size = strlen(s);
    while (s[idx] == c)
    {
        if (size <= idx)
            return (NULL);
        idx++;
    }
    return (s + idx);
}

static int    in_the_tab(char *s, size_t *cntr, char c, char **tab)
{
    char    *tmp_ptr_start;
    char    *tmp_ptr_end;

    tmp_ptr_end = s;
    tmp_ptr_start = cuter_detector(tmp_ptr_end, c);
    if (tmp_ptr_start == NULL)
      return (NULL);
    tmp_ptr_end = strchr(cuter_detector((tmp_ptr_start), c), c);
    if (tmp_ptr_end == NULL)
    {
      tab[*cntr] = calloc(sizeof(char), strlen(tmp_ptr_start));
      ft_strlcpy(tab[*cntr], tmp_ptr_start, strlen(tmp_ptr_start));
    }
    else
    {
      tab[*cntr] = calloc(sizeof(char), (size_t)(tmp_ptr_end - tmp_ptr_start));
      ft_strlcpy(tab[*cntr], tmp_ptr_start, (size_t)(tmp_ptr_end - tmp_ptr_start));
    }
    //return (strout);
}

char    **ft_split(char const *s, char c)
{
    int        idx;
    int        nb_word;
    char    **tabout;
    int        word_cntr;

    nb_word = the_words(s, c);
    tabout = calloc(sizeof(char *), nb_word);
    if (tabout == NULL)
        return (NULL);
    idx = 0;
    word_cntr = 0;
    while (word_cntr < nb_word)
    {
        //tabout[word_cntr] = in_the_tab((char *)s, (size_t *)&idx, c);
        in_the_tab((char *)s, (size_t *)&idx, c, tabout);
        if (tabout[word_cntr] == NULL)
            return (NULL);
        word_cntr++;
        idx++;
    }
    return (tabout);
}

int main() {
  
  char base[] = "//Attention/der";
  char **tab = ft_split(base, '/');
  return 0;
}
*/

/*
#include <stdlib.h>
#include <stdio.h>

size_t    ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t    cntr;

    cntr = 0;
    if (size == 0)
        return (strlen(src));
    while (cntr < (size - 1) && src[cntr] != '\0')
    {
        dst[cntr] = src[cntr];
        cntr++;
    }
    dst[cntr] = '\0';
    return (strlen(src));
}
*/
// -----Debut de split-----

static int    the_words(char const *s, char c)
{
    size_t	idx;
    int		nb_word;
    size_t	size;

    idx = 0;
    nb_word = 1;
    size = ft_strlen(s);
    while (s[idx] != '\0')
    {
      while (s[idx] == c)
      {
        if (size <= idx)
          break;
        idx++;
        if (s[idx] != c && s[idx] != '\0')
          nb_word++;
      }
      idx++;
    }
    return (nb_word);
}

char    *cuter_detector(char *s, char c)
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

static char    *in_the_tab(char *s, size_t *cntr, char c, char **tab)
{
    char    *tmp_ptr_start;
    char    *tmp_ptr_end;

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
#include <stdio.h>
char    **ft_split(char const *s, char c)
{
    size_t        idx;
    size_t        nb_word;
    char    **tabout;
    char    *tmp;

    tmp = (char *)s;
    nb_word = the_words(s, c);
	printf("NbWord : %d\n", (int)nb_word);
    tabout = ft_calloc(sizeof(char *), nb_word + 1);
    if (tabout == NULL)
        return (NULL);
    idx = 0;
    while (idx < nb_word - 1)
    {
        tmp = in_the_tab(tmp, &idx, c, tabout);
        if (tabout[idx] == NULL)
            return (NULL);
        idx++;
    }
    return (tabout);
}
/*
int main() {
  
  char base[] = "//Attention/der";
  char **tab = ft_split(base, '/');
  return 0;
}*/