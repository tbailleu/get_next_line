/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <tbailleu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:11:50 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/18 16:39:26 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**t;
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	word;

	i = 0;
	word = 0;
	if (!s || !(t = (char **)malloc(sizeof(*t) * (ft_strcnt_sep(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (end > start)
			if ((t[word++] = ft_strsub(s, start, end - start)) == NULL)
				return (NULL);
	}
	t[word] = NULL;
	return (t);
}
