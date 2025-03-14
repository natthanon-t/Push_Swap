/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:47:53 by ntairatt          #+#    #+#             */
/*   Updated: 2024/11/05 10:47:55 by ntairatt         ###   ########.fr       */
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
		exit(EXIT_SUCCESS);
	stack_a = NULL;
	stack_b = NULL;
	split_input(&stack_a, av);
	if (!stack_a)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		exit(255);
	}
	sort_index(&stack_a);
	push_swap(&stack_a, &stack_b);
	ft_clean(&stack_a);
	return (EXIT_SUCCESS);
}
