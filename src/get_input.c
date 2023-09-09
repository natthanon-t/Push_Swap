/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:29:31 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/19 12:20:54 by ntairatt         ###   ########.fr       */
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

int	skip_sp(char **nptr, int i)
{
	int	j;

	j = 0;
	while (nptr[i][j] == ' ' || nptr[i][j] == '\t' || nptr[i][j] == '\n'
		|| nptr[i][j] == '\v' || nptr[i][j] == '\f' || nptr[i][j] == '\r')
		j++;
	return (j);
}

long	ft_atoi_sp(char **nptr, t_nbr **stack_a, t_nbr **stack_b, int i)
{
	long	total;
	long	sign;
	long	j;

	total = 0;
	sign = 1;
	j = skip_sp(nptr, i);
	if (nptr[i][j] == '+' || nptr[i][j] == '-')
	{
		if (nptr[i][j] == '-')
			sign = -1;
		j++;
		if (nptr[i][j] < '0' || nptr[i][j] > '9')
			ft_cleanstack(stack_a, stack_b, nptr, 1);
	}
	while (nptr[i][j])
	{
		if (nptr[i][j] >= '0' && nptr[i][j] <= '9')
			total = (total * 10) + (nptr[i][j] - '0');
		else
			ft_cleanstack(stack_a, stack_b, nptr, 1);
		j++;
	}
	return (sign * total);
}

void	split_input(t_nbr **stack_a, t_nbr **stack_b, char **av)
{
	char	**tmp;
	long	nbr;
	int		i;
	int		j;

	i = 1;
	while (av[i])
	{
		if (!av[i][0])
			error(stack_a, stack_b);
		j = 0;
		tmp = ft_split(av[i], ' ');
		while (tmp[j])
		{
			nbr = ft_atoi_sp(tmp, stack_a, stack_b, j);
			if (nbr > 2147483647 || nbr < -2147483648)
				ft_cleanstack(stack_a, stack_b, tmp, 1);
			add_to_stack(stack_a, nbr);
			j++;
		}
		i++;
		ft_free_2(tmp);
	}
}
