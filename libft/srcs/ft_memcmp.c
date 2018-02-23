/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <tbailleu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:50:35 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/18 09:52:43 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				result_comp;
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	result_comp = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (42)
	{
		if (!n--)
			return (result_comp);
		result_comp += (str1[i] - str2[i]);
		if (str1[i] == str2[i])
			i++;
		else
			return (result_comp);
	}
}
