/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:56:21 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/14 15:18:42 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_nbr **stack_a, t_nbr **stack_b)
{
	if (check_sort(stack_a) == 0)
		return ;
	if (ft_lstlen(stack_a) < 6)
		simple_sort(ft_lstlen(stack_a), stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_nbr	*stack_a;
	t_nbr	*stack_b;

	if (ac < 2)
		exit (EXIT_SUCCESS);
	stack_a = NULL;
	stack_b = NULL;
	split_input(&stack_a, &stack_b, av);
	sort_index(&stack_a);
	push_swap(&stack_a, &stack_b);
	ft_cleanstack(&stack_a, &stack_b, NULL, 0);
	return (EXIT_SUCCESS);
}
