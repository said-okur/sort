# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:13:09 by sokur             #+#    #+#              #
#    Updated: 2023/09/11 14:52:30 by sokur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC =	check_input.c \
		push.c \
		sort.c \
		utils.c \
		ft_do_the_job.c \
		sort_utils.c \
		main.c\
		rerotate.c \
		stack_utils.c \
		onearg.c \
		rotate.c \
		swap.c \

all :
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY : all clean fclean re
