/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:54:58 by ntairatt          #+#    #+#             */
/*   Updated: 2023/06/16 16:05:29 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_case(int nbr, t_nbr **stack_a)
{
	if (nbr == 1)
		exit(EXIT_SUCCESS);
	else if (nbr == 2)
		case_two(stack_a);

}

void	case_two(t_nbr **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
	exit(EXIT_SUCCESS);
}
