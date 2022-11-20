# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 12:06:39 by rciaze            #+#    #+#              #
#    Updated: 2022/11/20 00:29:42 by zbp15            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
FLAGS = -Wall -Wextra -Werror
COMP = cc $(FLAGS) -c *.c

all : $(NAME)
	
$(NAME) :
	$(COMP)
	ar rc $(NAME) *.o 
	ranlib $(NAME)
clean : 
	rm -f *.o
fclean : clean
	rm -f $(NAME)
re : fclean all


.PHONY : all re clean fclean 
