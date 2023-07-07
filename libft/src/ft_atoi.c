/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:05:16 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/07 17:12:55 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	total;
	int	sign;

	total = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
		if (*nptr < '1' || *nptr > '9')
			return (-1);
	}
	while (*nptr)
	{
		if (*nptr >= '0' && *nptr <= '9')
			total = (total * 10) + (*nptr - '0');
		else
			return (-1);
		nptr++;
	}
	return (sign * total);
}
