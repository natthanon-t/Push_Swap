/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:34:04 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/08 22:36:26 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_nbr **stack_a)
{
	t_nbr	*current;
	t_nbr	*tmp_next;

	current = *stack_a;
	tmp_next = current->next;
	current->next = tmp_next->next;
	tmp_next->next = current;
	*stack_a = tmp_next;
	ft_printf("sa\n");
}

void	pa(t_nbr **stack_a, t_nbr **stack_b)
{
	t_nbr	*tmp;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_add_front(stack_a, tmp);
	ft_printf("pa\n");
}

void	pb(t_nbr **stack_a, t_nbr **stack_b)
{
	t_nbr	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_add_front(stack_b, tmp);
	ft_printf("pb\n");
}

void	ra(t_nbr **stack_a)
{
	t_nbr	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_add_back(stack_a, tmp);
	ft_printf("ra\n");
}

void	rra(t_nbr **stack_a)
{
	t_nbr	*tmp;
	t_nbr	*current;

	tmp = *stack_a;
	current = *stack_a;
	while (tmp->next)
		tmp = tmp->next;
	while (current->next != tmp)
		current = current->next;
	current->next = NULL;
	ft_add_front(stack_a, tmp);
	ft_printf("rra\n");
}
