/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:23:11 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/08 22:38:21 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_nbr **stack_a, t_nbr **stack_b)
{
	ft_clean(stack_a);
	ft_clean(stack_b);
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(255);
}

t_nbr	*min_node(t_nbr **stack_a)
{
	t_nbr	*min;
	t_nbr	*current;

	current = *stack_a;
	min = NULL;
	while (current)
	{
		if ((!min && current->index == 0)
			|| (current->index == 0 && current->value < min->value))
			min = current;
		current = current->next;
	}
	return (min);
}

void	sort_index(t_nbr **stack_a)
{
	t_nbr	*tmp;
	int		size;
	int		i;

	size = ft_lstlen(stack_a);
	i = 1;
	while (size--)
	{
		tmp = min_node(stack_a);
		tmp->index = i++;
	}
}

int	index_min(t_nbr **stack_a, int n)
{
	t_nbr	*current;
	int		i;

	current = *stack_a;
	i = 1;
	while (current)
	{
		if (current->index == n)
			break ;
		current = current->next;
		i++;
	}
	return (i);
}
