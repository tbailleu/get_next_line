/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <tbailleu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:33:56 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/18 09:52:44 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	if (*s && *s == c)
		return (ft_strrchr(s + 1, c) ? ft_strrchr(s + 1, c) : (char *)s);
	else if (*s)
		return (ft_strrchr(s + 1, c));
	else if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}
