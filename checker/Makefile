NAME =  tester
LIBFT = srcs/libft/libft.a
GNL = srcs/get_next_line/get_next_line.c
LIBASM = ../libasm.a
SRCS =	srcs/ch_read.c srcs/dop.c srcs/test.c srcs/main.c
CFLAGS = -Wall -Wextra -Werror

all: all clean
	make -C srcs/libft
	make clean -C srcs/libft
	make -C ../
	make clean -C ../
	gcc $(CFLAGS) $(SRCS) $(GNL) $(LIBASM) $(LIBFT) -o $(NAME)

clean:
	@rm 	-f *.txt

re: fclean all

fclean: clean
	rm -rf $(NAME)

.PHONY: clean fclean all re
	