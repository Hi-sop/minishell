# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 11:14:56 by khee-seo          #+#    #+#              #
#    Updated: 2021/12/20 17:14:16 by khee-seo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= gcc
CFLAGS= -Wall -Wextra -Werror
RL= -lreadline \
	-L /Users/khee-seo/.brew/opt/readline/lib \
	-I /Users/khee-seo/.brew/opt/readline/include

SRCS= src/main.c \
	  src/run_shell.c \
	  src/utils.c \
	  src/signal.c

NAME= minishell

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) $(RL)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:fclean all
