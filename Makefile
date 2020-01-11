# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbrichau <cbrichau@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/17 17:11:54 by cbrichau          #+#    #+#              #
#    Updated: 2020/01/11 14:31:48 by lhenneca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_wap
FLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): getlibft
	gcc $(FLAGS) main.c libft/libft.a -o $(NAME)

getlibft:
	make -C libft

clean:
	/bin/rm -f *.o
	/bin/rm -f libft/*.o

fclean: clean
	/bin/rm -f $(NAME) libft.a
	/bin/rm -f libft/libft.a

re: fclean all
