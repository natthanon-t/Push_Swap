/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:23:11 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/09 20:47:50 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	min_nbr(t_nbr **stack_a)
{
	t_nbr	*min;
	t_nbr	*current;

	min = *stack_a;
	current = *stack_a;
	while (current->next)
	{
		if (min->index > current->next->index)
			min = current->next;
		current = current->next;
	}
	return (min->index);
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
