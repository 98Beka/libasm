# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehande <ehande@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 14:06:06 by ehande            #+#    #+#              #
#    Updated: 2021/02/15 20:12:17 by ehande           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libasm.a
H = libasm.h
SRCS =	ft_write.s ft_strlen.s ft_strdup.s \
		ft_strcmp.s ft_read.s ft_strcpy.s 
CFLAGS = -Wall -Wextra -Werror


OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ)
	@gcc $(CFLAGS) -c $(SRCS) $(H)
	@ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm 	-f $(OBJ)

re: fclean all

fclean: clean
	rm -rf $(NAME)

.PHONY: clean fclean all re
	