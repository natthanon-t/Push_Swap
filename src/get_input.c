/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:29:31 by ntairatt          #+#    #+#             */
/*   Updated: 2023/11/10 23:20:51 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_to_stack(t_nbr **stack_a, int nbr)
{
	t_nbr	*node;

	node = ft_newnode(nbr);
	if (!node)
	{
		ft_clean(stack_a);
		exit(EXIT_SUCCESS);
	}
	ft_add_back(stack_a, node);
}

size_t	skip_sp(char *nptr)
{
	size_t	j;

	j = 0;
	while (nptr[j] && (nptr[j] == ' ' || (nptr[j] >= 9 && nptr[j] <= 13)))
		j++;
	return (j);
}

long	ft_atoi_sp(char **nptr, t_nbr **stack_a, size_t i)
{
	long	total;
	long	sign;
	size_t	j;

	total = 0;
	sign = 1;
	j = skip_sp(nptr[i]);
	if (nptr[i][j] == '+' || nptr[i][j] == '-')
	{
		if (nptr[i][j] == '-')
			sign = -1;
		j++;
		if (nptr[i][j] < '0' || nptr[i][j] > '9')
			ft_cleanstack(stack_a, nptr);
	}
	while (nptr[i][j])
	{
		if (nptr[i][j] >= '0' && nptr[i][j] <= '9')
			total = (total * 10) + (nptr[i][j] - '0');
		else
			ft_cleanstack(stack_a, nptr);
		j++;
	}
	return (sign * total);
}

void	split_input(t_nbr **stack_a, char **av)
{
	size_t	i;
	size_t	j;
	char	**tmp;
	long	nbr;

	i = 1;
	while (av[i])
	{
		if (!av[i][0])
			error(stack_a);
		j = 0;
		tmp = ft_split(av[i], ' ');
		while (tmp[j])
		{
			nbr = ft_atoi_sp(tmp, stack_a, j);
			if (nbr > 2147483647 || nbr < -2147483648)
				ft_cleanstack(stack_a, tmp);
			add_to_stack(stack_a, nbr);
			j++;
		}
		i++;
		ft_free_2(tmp);
	}
}
