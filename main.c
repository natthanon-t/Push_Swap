#include "push_swap.h"

void	ft_swap(t_list **v1)
{
	t_list	*head;
	t_list	*next_node;

	head = *v1;
	next_node = (*v1)->next;
	(*v1)->next = next_node->next;
	next_node->next = head;
	head = next_node;
}

//void	ft_add_back(t_nbr **stack, t_nbr *new)
//{
//	if (new == NULL)
//		return ;
//	if (*stack == NULL)
//		*stack = new;
//	else
//	{
//		while ((*stack)->next)
//			*stack = (*stack)->next;
//		(*stack)->next = new;
//	}
//}

int main()
{
	t_nbr	**stack_a;
	t_nbr	*v1 = ft_newnode(10);
	t_nbr	*v2 = ft_newnode(20);
	t_nbr	*v3 = ft_newnode(30);

	printf("size of stacka = %lu\n", sizeof(stack_a));
	printf("size of v1 = %lu\n", sizeof(v1));
	
	*stack_a = NULL;
	ft_add_back(stack_a, v1);	
	ft_add_back(stack_a, v2);
	ft_add_back(stack_a, v3);
	t_nbr	**tmp_a = stack_a;
	while (*stack_a)
	{
		printf("value = %d\n", (*stack_a)->value);
		(*stack_a) = (*stack_a)->next;
	}
	free(stack_a);
}