# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 12:06:39 by rciaze            #+#    #+#              #
#    Updated: 2022/11/22 12:18:24 by rciaze           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
FLAGS = -Wall -Wextra -Werror
COMP = cc $(FLAGS) -c
all : $(NAME)
SRCS =	ft_atoi.c \
ft_tolower.c \
ft_toupper.c \
ft_itoa.c \
ft_isalpha.c \
ft_isascii.c \
ft_isalnum.c \
ft_isdigit.c \
ft_isprint.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_strmapi.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_bzero.c \
ft_memcpy.c \
ft_memset.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_calloc.c \

SRCS_BONUS	=	ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \

OBJ = ${SRCS:.c=.o}

OBJ_BONUS = ${SRCS_BONUS:.c=.o}

$(NAME) :
	$(COMP) $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
bonus :
	$(COMP) $(SRCS_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)
clean : 
	rm -f *.o
fclean : clean
	rm -f $(NAME)
re : fclean all


.PHONY : all re clean fclean 
