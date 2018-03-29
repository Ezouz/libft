/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouzard <ehouzard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:30:51 by ehouzard          #+#    #+#             */
/*   Updated: 2018/01/15 16:05:12 by ehouzard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(const char *s, char c)
{
	size_t		i;
	int			words;

	i = 0;
	words = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		if ((i == 0 && ft_isprint(s[i]) && s[i] != c) ||
				(i > 0 && ft_isprint(s[i]) && s[i - 1] == c))
		{
			words++;
			i++;
		}
		i++;
	}
	return (words);
}
