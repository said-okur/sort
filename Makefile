# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:13:09 by sokur             #+#    #+#              #
#    Updated: 2023/09/16 18:11:42 by sokur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
TARGET = checker
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ./libft/
LIBRARY = $(LIBFT)libft.a

SRC =	check_input.c \
		push.c \
		sort.c \
		utils.c \
		ft_do_the_job.c \
		sort_utils.c \
		main.c\
		rerotate.c \
		stack_utils.c \
		quotes.c \
		rotate.c \
		swap.c \

CCC =	check_input.c \
		push.c \
		sort.c \
		utils.c \
		ft_do_the_job.c \
		sort_utils.c \
		rerotate.c \
		stack_utils.c \
		quotes.c \
		rotate.c \
		swap.c \
		checker.c \

all :
	MAKE -C $(LIBFT)
	$(CC) $(CFLAGS) $(SRC) $(LIBRARY) -o $(NAME)

bonus :
	MAKE -C $(LIBFT)
	$(CC) $(CFLAGS) $(SRC) $(LIBRARY) -o $(NAME)
	$(CC) $(CFLAGS) $(CCC) $(LIBRARY) -o $(TARGET)

clean :
	MAKE clean -C $(LIBFT)
	rm -rf $(NAME)

fclean : clean
	MAKE fclean -C $(LIBFT)
	rm -rf $(TARGET)

re : fclean all

.PHONY : all clean fclean bonus re
