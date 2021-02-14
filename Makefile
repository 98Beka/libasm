# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehande <ehande@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 14:06:06 by ehande            #+#    #+#              #
#    Updated: 2021/02/13 01:12:25 by ehande           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libasm.a
SRCS =	ft_write.s ft_strlen.s ft_strdup.s \
		ft_strcmp.s ft_read.s ft_strcpy.s 
CFLAGS = -Wall -Wextra -Werror


OBJ = ${SRCS:%.s=srcs/%.o} 
%.o	: %.s
	nasm -f macho64 $< -o $@

$(NAME): $(OBJ)
	 @ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm 	-f $(OBJ)

re: fclean all

fclean: clean
	rm -rf $(NAME)

.PHONY: clean fclean all re
	