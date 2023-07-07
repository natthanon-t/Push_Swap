# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 16:37:31 by ntairatt          #+#    #+#              #
#    Updated: 2023/06/30 14:06:36 by ntairatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC	=	cc -g

CFLAGS	=	-Wall -Wextra -Werror -I$(DIR_INC) -I$(LIBFT_DIR)

SRCS	=	push_swap.c \
				ft_free.c \
				error.c \
				get_input.c \
				ft_lst.c \
				op.c \
				simple_sort.c \
				radix_sort.c

SRCS_T	=	test.c \
				ft_free.c \
				error.c \
				get_input.c \
				ft_lst.c \
				op.c \
				simple_sort.c \
				radix_sort.c

DIR_INC	=	include
DIR_SRC	=	src

LIBFT	=	libft/libft.a
LIBFT_DIR	=	libft/include

AR	=	ar -rcs

RM	=	rm -rf

$(NAME):
	@make bonus -C libft
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)

.PHONY: all clean fclean re norm
all: $(NAME)

clean:
		@$(RM) $(OBJS)
		@echo "object files has removed"
		@make clean -C libft


fclean: clean
		@$(RM) $(NAME)
		@make fclean -C libft

re: fclean all

test:
	@$(CC) $(CFLAGS) $(SRCS_T) $(LIBFT) -o $(NAME)
norm:
	@make norm -C libft
	@echo "---------------- PUSH_SWAP ----------------"
	@norminette $(SRCS)
	@echo "------------------------------------------\n"
