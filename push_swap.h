/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:34:20 by ntairatt          #+#    #+#             */
/*   Updated: 2023/07/07 16:31:31 by ntairatt         ###   ########.fr       */
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
	int				value;
	int				index;
	struct s_nbr	*next;
}				t_nbr;

void	error(void);
t_nbr	*ft_newnode(int nbr);
void	ft_add_front(t_nbr **stack, t_nbr *new);
void	ft_add_back(t_nbr **stack, t_nbr *new);
int		ft_lstlen(t_nbr **lst);
void	ft_clean(t_nbr **lst);
void	split_input(t_nbr **stack_a, t_nbr **stack_b, char **av);
void	add_to_stack(t_nbr **stack_a, int nbr);
void	ft_free_2(char **str);
void	ft_cleanstack(t_nbr **stack_a, t_nbr **stack_b);
void	radix_sort(t_nbr **stack_a, t_nbr **stack_b);
void	simple_sort(int nbr, t_nbr **stack_a, t_nbr **stack_b);
void	case_two(t_nbr **stack_a);
void	case_three(t_nbr **stack_a);
int		check_sort(t_nbr **stack_a);
void	sort_index(t_nbr **stack_a);

/* Operations */
void	sa(t_nbr **stack_a);
void	pa(t_nbr **stack_a, t_nbr **stack_b);
void	pb(t_nbr **stack_a, t_nbr **stack_b);
void	ra(t_nbr **stack_a);
void	rra(t_nbr **stack_a);

#endif
