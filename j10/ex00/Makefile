# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    make                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nwilcke <nwilcke@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 09:29:02 by nwilcke           #+#    #+#              #
#    Updated: 2015/07/22 15:23:37 by nwilcke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

FTH = ./includes/ft.h

SRC = ./srcs

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -include $(FTH)
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
