# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 16:37:31 by ntairatt          #+#    #+#              #
#    Updated: 2023/06/08 12:33:57 by ntairatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC	=	cc

CFLAGS	=	-Wall -Wextra -Werror -I$(DIR_INC)

SRCS	=	push_swap.c \
				error.c \
				bubble.c \

DIR_INC	=	include
DIR_SRC	=	src

LIBFT	=	libft/libft.a

AR	=	ar -rcs

RM	=	rm -rf

$(NAME):
	@make bonus -C libft
#@$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)

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

norm:
	@make norm -C libft
	@echo "---------------- PUSH_SWAP ----------------"
	@norminette include src
	@echo "------------------------------------------\n"