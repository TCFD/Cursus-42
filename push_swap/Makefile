# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 10:50:48 by zbp15             #+#    #+#              #
#    Updated: 2023/01/12 13:48:16 by rciaze           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Wextra -Werror -c
COMP = cc $(FLAGS)
all : $(NAME)
CLEANF = rm -f *.o

SRCS =	push_swap.c \
stack_function.c \
stack_function2.c \
short_stack_sorting.c \
short_stack_sorting_2.c \


OBJ = ${SRCS:.c=.o}

clean :
	make clean -C libft
	$(CLEANF)

$(NAME) : $(OBJ)
	make -C libft
	mv libft/libft.a .
	$(COMP) $(OBJ) libft.a -o $(NAME)

fclean : clean
	make fclean -C libft
	rm -f $(NAME)
	rm -f libft.a
re : fclean all


.PHONY : all re clean fclean 
