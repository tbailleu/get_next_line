/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <tbailleu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 19:51:37 by tbailleu          #+#    #+#             */
/*   Updated: 2017/12/18 08:54:20 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_readfile(const int fd)
{
	char	buf[MY_BUFF_SIZE + 1];
	char	*result;
	int		nbc;

	result = ft_strnew(0);
	while ((nbc = read(fd, buf, MY_BUFF_SIZE)) > 0)
	{
		buf[nbc] = '\0';
		if (!(result = ft_strjoin(result, buf)))
			return (NULL);
	}
	if (nbc == -1)
		return (NULL);
	return (result);
}
