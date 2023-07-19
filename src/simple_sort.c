/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:54:58 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/19 11:48:45 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_sort(int nbr, t_nbr **stack_a, t_nbr **stack_b)
{
	if (nbr == 1)
		return ;
	else if (nbr == 2)
	{
		if ((*stack_a)->index > (*stack_a)->next->index)
			sa(stack_a);
	}
	else if (nbr == 3)
	{
		(void) stack_b;
		case_three(stack_a);
	}
	else if (nbr == 4)
		case_four(stack_a, stack_b);
	else if (nbr == 5)
		case_five(stack_a, stack_b);
}

void	case_three(t_nbr **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->value < (*stack_a)->next->next->value)
		sa(stack_a);
	else if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->next->value > (*stack_a)->next->next->value)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->next->value < (*stack_a)->next->next->value)
		ra(stack_a);
	else if ((*stack_a)->value < (*stack_a)->next->next->value
		&& (*stack_a)->next->value > (*stack_a)->next->next->value)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if ((*stack_a)->next->next->value < (*stack_a)->value
		&& (*stack_a)->next->next->value < (*stack_a)->next->value)
		rra(stack_a);
}

void	case_four(t_nbr **stack_a, t_nbr **stack_b)
{
	int		n;

	n = index_min(stack_a, min_nbr(stack_a));
	if (n == 2)
		ra(stack_a);
	else if (n == 3)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (n == 4)
		rra(stack_a);
	if (!check_sort(stack_a))
		return ;
	pb(stack_a, stack_b);
	case_three(stack_a);
	pa(stack_a, stack_b);
}

void	case_five(t_nbr **stack_a, t_nbr **stack_b)
{
	int	n;

	n = index_min(stack_a, min_nbr(stack_a));
	if (n == 2)
		ra(stack_a);
	else if (n == 3)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (n == 4)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (n == 5)
		rra(stack_a);
	if (!check_sort(stack_a))
		return ;
	pb(stack_a, stack_b);
	case_four(stack_a, stack_b);
	pa(stack_a, stack_b);
}
