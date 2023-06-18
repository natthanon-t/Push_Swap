/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:10:51 by ntairatt          #+#    #+#             */
/*   Updated: 2023/06/16 10:23:46 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_nbr	*ft_newnode(int nbr)
{
	t_nbr	*new;

	new = (t_nbr *)malloc(sizeof(t_nbr));
	if (!new)
		return (NULL);
	new->value = nbr;
	new->index = 0;
	new->next = NULL;
	return (new);
}

void	ft_add_front(t_nbr **stack, t_nbr *new)
{
	if (new == NULL)
		return ;
	if (*stack == NULL)
		*stack = new;
	new->next = *stack;
	*stack = new;
}

void	ft_add_back(t_nbr **stack, t_nbr *new)
{
	t_nbr	*lastl;

	if (new == NULL)
		return ;
	if (*stack == NULL)
		*stack = new;
	else
	{
		lastl = *stack;
		while (lastl->next)
			lastl = lastl->next;
		lastl->next = new;
	}
}

void	ft_clean(t_nbr **lst)
{
	t_nbr	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
	free(lst);
}
