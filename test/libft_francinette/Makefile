NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = libft.c
OBJS = $(SRCS:.c=.o)
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	$(CC) $(CFLAGS) main.c -L. -lft -o test_program
	./test_program

.PHONY: all clean fclean re test

