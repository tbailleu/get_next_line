/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <tbailleu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 11:49:31 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/23 16:35:27 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putbin(uint64_t nb, const char sep, size_t len, size_t seplen)
{
	int i;

	i = 0;
	while (len--)
	{
		ft_putchar(((nb & (((uint64_t)1 << 63) >> i)) != 0) + '0');
		if (i++ && i % seplen == 0)
			ft_putchar(sep);
	}
}
