#include "libft/include/libft.h"

int main()
{
	t_list *test1;
	t_list *test2;

	test1 = ft_lstnew(10);
	test2 = ft_lstnew(20);
	ft_lstadd_back(test1, test2);
	while (test1)
	{
		ft_printf("%d", test1->content);
		test1 = test1->next;
	}
}
