/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <tbailleu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:25:26 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/18 09:52:44 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*tmp;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (len >= 0 && ft_space(s[len - 1]))
		len--;
	i = 0;
	while (ft_space(s[i++]))
		len--;
	if (len <= 0)
		len = 0;
	if ((tmp = ft_strsub(s, i - 1, len)) == NULL)
		return (NULL);
	return (tmp);
}
