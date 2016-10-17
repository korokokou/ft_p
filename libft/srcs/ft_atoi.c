/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinder <mbinder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 10:35:38 by mbinder           #+#    #+#             */
/*   Updated: 2016/09/19 20:09:55 by takiapo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_atoi(const char *str)
{
	if (!str)
		return (0);
	return (atoi(str));
}
/*
int		ft_atoi(const char *str)
{
	int		nb;
	int		i;
	int		a;

	nb = 0;
	i = 0;
	a = 1;
	if (!str)
		return (0);
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
	{
		i++;
		a = -1;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] != 0) && (str[i] <= '9') && (str[i] >= '0'))
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
	}
	return (nb * a);
}
*/
