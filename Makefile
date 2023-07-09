# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 16:37:31 by ntairatt          #+#    #+#              #
#    Updated: 2023/07/09 21:00:59 by ntairatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC	=	cc

CFLAGS	=	-Wall -Wextra -Werror -I$(DIR_INC) -I$(LIBFT_DIR)

SRCS	=	push_swap.c \
				ft_free.c \
				utils.c \
				get_input.c \
				ft_lst.c \
				op.c \
				simple_sort.c \
				radix_sort.c

DIR_INC	=	include
DIR_SRC	=	src

LIBFT	=	libft/libft.a
LIBFT_DIR	=	libft/include

RM	=	rm -rf

$(NAME):
	@make -C libft
	@$(CC) $(CFLAGS) $(addprefix $(DIR_SRC)/, $(SRCS)) $(LIBFT) -o $(NAME)

.PHONY: all clean fclean re norm
all: $(NAME)

clean:
		@$(RM) $(NAME)
		@echo "Push_Swap has Removed"
		@make clean -C libft


fclean:
		@$(RM) $(NAME)
		@echo "Push_Swap has Removed"
		@make fclean -C libft

re: fclean all

norm:
	@make norm -C libft
	@echo "---------------- PUSH_SWAP ----------------"
	@norminette $(DIR_INC) $(DIR_SRC)
	@echo "------------------------------------------\n"
