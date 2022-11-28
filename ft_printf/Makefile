# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 18:12:08 by rciaze            #+#    #+#              #
#    Updated: 2022/11/28 16:50:07 by rciaze           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
FLAGS = -Wall -Wextra -Werror
COMP = cc $(FLAGS) -c
all : $(NAME)

SRCS =	ft_printf.c \
ft_putchar.c \
ft_putnbr.c \
ft_putstr.c \
ft_print_adress.c \
ft_strdup.c \
ft_strlen.c \

OBJ = ${SRCS:.c=.o}


$(NAME) :
	$(COMP) $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean : 
	rm -f *.o
fclean : clean
	rm -f $(NAME)
re : fclean all


.PHONY : all re clean fclean 