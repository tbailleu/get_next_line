/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnt_sep.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <tbailleu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:25:20 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/18 09:52:43 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strcnt_sep(const char *s, char c)
{
	size_t is_sep;
	size_t nbrsep;
	size_t i;

	i = 0;
	is_sep = 0;
	nbrsep = 0;
	while (s[i])
	{
		if (s[i] == c && is_sep)
			is_sep = 0;
		if (s[i] != c && !is_sep)
		{
			nbrsep++;
			is_sep = 1;
		}
		while (s[i] && s[i] == c && !is_sep)
			i++;
		while (s[i] && s[i] != c && is_sep)
			i++;
	}
	return (nbrsep);
}
