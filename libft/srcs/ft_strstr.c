/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <tbailleu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:48:57 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/18 09:52:44 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t length;

	length = ft_strlen(s2);
	if (!s2)
		return (NULL);
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1)
	{
		if (ft_strncmp((char *)s1, (char *)s2, length) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
