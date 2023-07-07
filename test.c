#include "push_swap.h"

//int main()
//{
//	t_list *test1;
//	t_list *test2;

//	test1 = ft_lstnew(10);
//	test2 = ft_lstnew(20);
//	ft_lstadd_back(test1, test2);
//	while (test1)
//	{
//		ft_printf("%d", test1->content);
//		test1 = test1->next;
//	}
//}

int main(int argc, char **argv)
{
	printf("%d, %s\n",argc, argv[1]);
	t_nbr *node1 = ft_newnode(0);
	t_nbr *node2 = ft_newnode(1);
	t_nbr *node3 = ft_newnode(3);

	t_nbr **stack_a = (t_nbr **)malloc(sizeof(t_nbr *));
	t_nbr **stack_b = (t_nbr **)malloc(sizeof(t_nbr *));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_add_front(stack_a, node1);
	ft_add_front(stack_a, node2);
	ft_add_front(stack_a, node3);
	t_nbr *head = *stack_a;
	while (head)
	{
		printf("stack_a = %d\n", head->value);
		head = head->next;
	}
	pb(stack_a, stack_b);
	head = *stack_a;
	while (head)
	{
		printf("stack_a = %d index = %d\n", head->value, head->index);
		head = head->next;
	}
	int i = 0;
	head = *stack_b;
	while(head)
	{
		if ((head->index) & (1 << i))
			printf("(%d) head->value = %d, head->index = %d\n", i, head->value, head->index);
		else
			printf("(%d), head->value = %d, head->index = %d\n", i, head->value, head->index);
		head = head->next;
	}
	//ft_cleanstack(stack_a, stack_b);
}
