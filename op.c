/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:34:04 by ntairatt          #+#    #+#             */
/*   Updated: 2023/06/15 17:04:30 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **v1)
{
	t_list	*head;
	t_list	*next_node;

	head = *v1;
	next_node = (*v1)->next;
	(*v1)->next = next_node->next;
	next_node->next = head;
	head = next_node;
}

void	sa(t_nbr **stack)
{
	ft_swap(stack);
	ft_printf("sa\n");
}

void	pb(t_nbr **stack_a, t_nbr **stack_b)
{
	t_nbr	*head_a;

	head_a = *stack_a;
	*stack_a = (*stack_a)->next;
	head_a->next = NULL;
	ft_add_back(stack_b, head_a);
	ft_printf("pb\n");
}

void	pa(t_nbr **stack_a, t_nbr **stack_b)
{
	t_nbr	*head_b;

	head_b = *stack_b;
	*stack_b = (*stack_b)->next;
	head_b->next = NULL;
	ft_add_back(stack_a, head_b);
	ft_printf("pa\n");
}

void	ra(t_nbr **stack_a)
{
	t_nbr	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	while((*stack_a)->next)
		*stack_a = (*stack_a)->next;
	(*stack_a)->next = tmp;
}