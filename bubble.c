/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:59:05 by ntairatt          #+#    #+#             */
/*   Updated: 2023/06/08 14:25:04 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(t_nbr *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < stack->size)
	{
		while (j < stack->size)
		{
			if (stack->nbr[i] > stack->nbr[j])
			{
				tmp = stack->nbr[i];
				stack->nbr[i] = stack->nbr[j];
				stack->nbr[j] = tmp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	add_index(t_nbr *stack)
{
	
}