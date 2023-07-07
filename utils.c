/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:06:46 by ntairatt          #+#    #+#             */
/*   Updated: 2023/06/18 16:14:57 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(int nbr, t_nbr **stack_a)
{
	t_nbr	*min;
	int		i;
	int		tmp;

	i = 1;
	tmp = nbr - i;
	while (nbr - i)
	{
		tmp = nbr - i;
		while ((*stack_a)->next == -1 && tmp--)
		{
			min = *stack_a;
			if (min->value > min->next->value);
		}
	}
}
