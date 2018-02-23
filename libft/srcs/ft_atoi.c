/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <tbailleu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:53:35 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/18 10:01:26 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int					i;
	unsigned long long	resultat;
	int					signe;

	resultat = 0;
	signe = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		signe = (str[i++] == '+') ? 1 : -1;
	while (ft_isdigit(str[i]))
		resultat = resultat * 10 + str[i++] - '0';
	if (signe == 1 && resultat > __LONG_LONG_MAX__)
		resultat = -1;
	if (signe == -1 && resultat > __LONG_LONG_MAX__)
		resultat = 0;
	return ((int)resultat * signe);
}
