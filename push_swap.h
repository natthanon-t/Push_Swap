/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:34:20 by ntairatt          #+#    #+#             */
/*   Updated: 2023/06/14 10:20:11 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

typedef struct s_nbr
{
	int	*nbr;
	int	index;
	int	bit;
	int	size;
}				t_nbr;

void	error(void);
t_nbr	*ft_newnode(int value);
void	ft_add_front(t_nbr **stack, t_nbr *new);
void	ft_add_back(t_nbr **stack, t_nbr *new);
void	ft_delone(t_nbr *lst);
void	ft_clean(t_nbr **lst);

#endif
