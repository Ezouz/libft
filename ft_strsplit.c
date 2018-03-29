/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouzard <ehouzard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:36:57 by ehouzard          #+#    #+#             */
/*   Updated: 2018/01/15 17:07:12 by ehouzard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*splitintab(char const *s, char c, int *idx)
{
	char			*str;
	unsigned int	start;
	size_t			len;

	str = NULL;
	start = 0;
	len = 0;
	while (s[start] == c)
		start++;
	len = ft_count_char(s + start, c);
	(*idx) = (*idx) + start + len;
	if ((str = ft_strsub(s, start, len)) == NULL)
		return (NULL);
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	nb_words;
	size_t	i;
	int		idx;

	i = 0;
	idx = 0;
	if (!s)
		return (NULL);
	nb_words = ft_count_words(s, c);
	if (!(tab = (char**)malloc((sizeof(char*) * nb_words + 1))))
		return (NULL);
	while (i < nb_words)
	{
		tab[i] = splitintab(s + idx, c, &idx);
		i++;
	}
	tab[nb_words] = NULL;
	return (tab);
}
