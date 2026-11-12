# Makefile

NAME = bonus2

SRCS = main.c \
	print_tab.c


all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all