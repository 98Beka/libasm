# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehande <ehande@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 14:06:06 by ehande            #+#    #+#              #
#    Updated: 2021/02/22 19:56:45 by ehande           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libasm.a
H = libasm.h
SRCS =	ft_write.s ft_strlen.s ft_strdup.s \
		ft_strcmp.s ft_read.s ft_strcpy.s
CFLAGS = -Wall -Wextra -Werror

OBJ = ${SRCS:%.s=srcs/%.o}
%.o	: %.s	
	nasm -f macho64 $< -o $@	
OBJS = ${SRCS:%.s=srcs/%.o}

$(NAME): $(OBJ) $(H)
	ar rcs $(NAME) $(OBJS) 

all: $(NAME)

clean:
	rm ${OBJS}

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
	