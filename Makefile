# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntairatt <ntairatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 16:37:31 by ntairatt          #+#    #+#              #
#    Updated: 2023/05/21 10:32:30 by ntairatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I$(DIR_INC)

SRCS = push_swap.c main.c \

DIR_INC = include
DIR_SRC = src

AR = ar -rcs

RM = rm -rf

OBJS = $(SRSC:.c=.o)
#OBJS = $(addprefix $(DIR_SRC)/, $(SRCS:.c=.o))

$(NAME): $(OBJS)

.PHONY: all clean fclean re norm
all: $(NAME)

clean:
		@$(RM) $(OBJS)
		@echo "object files has removed"
		

fclean: clean
		@$(RM) $(NAME)
		@echo "libft has removed"

re: fclean all

norm:
	@echo "Norminette is Checking......"
	@echo "-----------------------------------------------"
	@norminette $(addprefix $(DIR_SRC)/, $(SRCS))
	@echo "-----------------------------------------------"