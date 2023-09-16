# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 19:59:35 by wakaboyashi       #+#    #+#              #
#    Updated: 2023/09/16 17:38:58 by sokur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= libft.a
PRINTF		= ft_printf/Makefile
GREEN		= \033[0;32m
GREY		= \033[0;90m
RED			= \033[0;31m
WHITE		= \033[0;37m
RESET		= \033[0m

CC 			= gcc

FLAGS 		= -Wall -Werror -Wextra

TICK		= ✅

CROSS = ❌

REMOVE 		= rm -f

INCLUDE = -I ./

SRCS 		= ft_isalpha.c 	\
			ft_strnew.c		\
			ft_strncpy.c	\
			ft_isdigit.c 	\
			ft_isalnum.c 	\
			ft_isascii.c 	\
			ft_isprint.c 	\
			ft_strlen.c 	\
			ft_memset.c 	\
			ft_bzero.c 		\
			ft_memcpy.c 	\
			ft_memmove.c 	\
			ft_strlcpy.c 	\
			ft_strlcat.c 	\
			ft_toupper.c 	\
			ft_tolower.c 	\
			ft_strchr.c 	\
			ft_strcmp.c		\
			ft_strrchr.c 	\
			ft_strncmp.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strnstr.c	\
			ft_atoi.c 		\
			ft_strdup.c 	\
			ft_calloc.c 	\
			ft_itoa.c 		\
			ft_substr.c	 	\
			ft_split.c 		\
			ft_strjoin.c 	\
			ft_strtrim.c	\
			ft_itoa.c 		\
			ft_strmapi.c 	\
			ft_striteri.c 	\
			get_next_line.c	\
			get_next_line_utils.c	\
			ft_putstr_fd.c 	\
			ft_putchar_fd.c \
			ft_putstr_fd.c 	\
			ft_putendl_fd.c \
			ft_putnbr_fd.c	\

BONUS_SRCS	= ft_lstnew.c		\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c

PRINTF_SRCS = ./ft_printf/ft_printf.c \
	./ft_printf/ft_forfun.c

OBJS 		= $(SRCS:.c=.o)

BONUS_OBJS 	= $(BONUS_SRCS:.c=.o)
PRINTF_OBJ = $(PRINTF_SRCS:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJS) $(PRINTF_OBJ)
			@ar -rcs $(NAME) $(OBJS) $(PRINTF_OBJ)
			@echo "$(GREY)libft: $(GREEN)$(NAME) was created $(TICK)"

bonus:		$(NAME) $(BONUS_OBJS)
			@ar -rcs $(NAME) $(BONUS_OBJS)
			@echo "$(GREY)Libft: $(GREEN)$(NAME) was created with Bonus$(TICK)"

.c.o:
			@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
			@$(REMOVE) $(OBJS) $(BONUS_OBJS) $(PRINTF_OBJ)
			@echo "$(RED)Libft: object files were deleted $(CROSS)"

fclean:		clean
			@$(REMOVE) $(NAME)
			@echo "$(RED)Libft: $(NAME) was deleted $(CROSS)"

re:			fclean $(NAME)

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus printf
