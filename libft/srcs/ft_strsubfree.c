/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubfree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <tbailleu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:13:01 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/19 15:19:23 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsubfree(char const *s, unsigned int start, size_t len)
{
	char	*tmp;

	if (!s || (tmp = ft_strnew(len)) == NULL)
		return (NULL);
	tmp[len] = '\0';
	tmp = ft_memcpy(tmp, s + start, len);
	ft_strdel((char **)&s);
	return (tmp);
}
