#include "push_swap.h"

//int main()
//{
//	t_nbr	**stack_a;
//	t_nbr	*v1 = ft_newnode(10);
//	t_nbr	*v2 = ft_newnode(20);
//	t_nbr	*v3 = ft_newnode(30);	

//	stack_a = (t_nbr **)malloc(sizeof(t_nbr *));
//	*stack_a = NULL;
//	ft_add_back(stack_a, v1);	
//	ft_add_back(stack_a, v2);	
//	ft_add_back(stack_a, v3);

//	t_nbr	*tmp = *stack_a;
//	while (tmp)
//	{
//		printf("value = %d\n", tmp->value);
//		tmp = tmp->next;
//	}
//	ft_clean(stack_a);
//}

int main()
{
	char **test;
	int i =0;

	test = ft_split("	 a		q", ' ');
	while (test[i])
		printf("test = %s\n", test[i++]);
}
