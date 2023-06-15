/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:37:59 by ntairatt          #+#    #+#             */
/*   Updated: 2023/06/15 17:13:27 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_nbr **stack_a, t_nbr **stack_b)
{
	int	max_bit;
	int	i;

	max_bit = 10;
	i = 0;
	while (max_bit--)
	{
		while (*stack_a)
		{
			if ((*stack_a)->value & (1 << i))
				pb(stack_a, stack_b);
			
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}