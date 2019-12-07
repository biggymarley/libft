# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afaragi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 20:51:03 by afaragi           #+#    #+#              #
#    Updated: 2019/04/25 02:27:12 by afaragi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

all : $(NAME)

$(NAME) :
	gcc -Wall -Werror -Wextra -c *.c
	ar rc $(NAME) *.o

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
