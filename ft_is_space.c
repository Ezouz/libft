/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouzard <ehouzard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:47:02 by ehouzard          #+#    #+#             */
/*   Updated: 2018/01/14 15:00:51 by ehouzard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_space(char str)
{
	if (str == ' ' || str == '\f' || str == '\t' ||
		str == '\n' || str == '\r' || str == '\v')
		return (1);
	return (0);
}