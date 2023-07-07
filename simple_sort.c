/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:54:58 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/07 16:34:46 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_sort(int nbr, t_nbr **stack_a, t_nbr **stack_b)
{
	if (nbr == 1)
		exit(EXIT_SUCCESS);
	else if (nbr == 2)
	{
		(void) stack_b;
		case_two(stack_a);
	}
	else if (nbr == 3)
	{
		(void) stack_b;
		case_three(stack_a);
	}
	else
		radix_sort(stack_a, stack_b);
}

void	case_two(t_nbr **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
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
	else
		error();
}
