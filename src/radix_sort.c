/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:37:59 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/09 20:45:35 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_maxbitlen(t_nbr **stack_a)
{
	t_nbr	*runner;
	t_nbr	*max;
	int		i;

	runner = *stack_a;
	max = runner->next;
	while (runner)
	{
		if (runner->index > max->index)
			max = runner;
		runner = runner->next;
	}
	i = 0;
	while (max->index >> i)
		i++;
	return (i);
}

int	check_sort(t_nbr **stack_a)
{
	t_nbr	*run_a;

	run_a = *stack_a;
	while (run_a->next)
	{
		if (run_a->value < run_a->next->value)
			run_a = run_a->next;
		else
			return (1);
	}
	return (0);
}

void	radix_sort(t_nbr **stack_a, t_nbr **stack_b)
{
	t_nbr	*current;
	int		lst_len;
	int		max_bit;
	int		i;

	i = 0;
	max_bit = ft_maxbitlen(stack_a);
	while (i < max_bit && check_sort(stack_a))
	{
		lst_len = ft_lstlen(stack_a);
		while (lst_len--)
		{
			current = *stack_a;
			if ((current->index & (1 << i)))
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		lst_len = ft_lstlen(stack_b);
		while (lst_len--)
			pa(stack_a, stack_b);
		i++;
	}
}
