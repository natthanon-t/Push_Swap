/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:14:59 by ntairatt          #+#    #+#             */
/*   Updated: 2023/11/10 23:14:56 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_2(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	error(t_nbr **stack)
{
	ft_clean(stack);
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(255);
}

void	ft_cleanstack(t_nbr **stack, char **nptr)
{
	if (nptr)
	{
		ft_free_2(nptr);
		error(stack);
	}
	ft_clean(stack);
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
}
