/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:29:31 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/07 16:47:39 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cleanstack(t_nbr **stack_a, t_nbr **stack_b)
{
	ft_clean(stack_a);
	ft_clean(stack_b);
}

void	add_to_stack(t_nbr **stack_a, int nbr)
{
	t_nbr	*node;
	t_nbr	*check_dup;

	check_dup = *stack_a;
	node = ft_newnode(nbr);
	while (check_dup)
	{
		if (node->value == check_dup->value)
			error();
		check_dup = check_dup->next;
	}
	ft_add_back(stack_a, node);
}

void	split_input(t_nbr **stack_a, t_nbr **stack_b, char **av)
{
	char	**tmp;
	int		nbr;
	int		i;
	int		j;

	i = 1;
	while (av[i])
	{
		if (!av[i][0])
			error();
		j = 0;
		tmp = ft_split(av[i++], ' ');
		while (tmp[j])
		{
			nbr = ft_atoi(tmp[j++]);
			if (nbr == -1)
			{
				ft_cleanstack(stack_a, stack_b);
				ft_free_2(tmp);
				error();
			}
			add_to_stack(stack_a, nbr);
		}
		ft_free_2(tmp);
	}
	sort_index(stack_a);
}

t_nbr	*min_node(t_nbr **stack_a)
{
	t_nbr	*min;
	t_nbr	*current;

	current = *stack_a;
	min = NULL;
	while (current)
	{
		if ((!min && current->index == -1)
			|| (current->index == -1 && current->value < min->value))
			min = current;
		current = current->next;
	}
	return (min);
}

void	sort_index(t_nbr **stack_a)
{
	t_nbr	*tmp;
	int		size;
	int		i;

	size = ft_lstlen(stack_a);
	i = 0;
	while (size--)
	{
		tmp = min_node(stack_a);
		tmp->index = i++;
	}
}
