NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = args.c error.c numbers1.c numbers2.c \
	push.c rotate.c swap.c reverse_rotate.c \
	radix_sort.c test_sort.c utils1.c utils2.c \
	main.c three_sort.c four_five_sort.c
OBJ = $(SRC:.c=.o)
OBJDIR = obj/
OBJS = $(addprefix $(OBJDIR), $(OBJ))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	cc $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


OS = $(shell uname)

size ?= 10

ifeq ($(OS),Linux)
CHECKER = valgrind ./push_swap $(ARG) | ./checker_linux $(ARG)
else
CHECKER = ./push_swap $(ARG) | ./checker_Mac $(ARG)
endif

test:
	@$(eval ARG = $(shell seq -1000 1000 | shuf -n $(size)))
	@echo "Checker result: "
	$(CHECKER)
	@echo "Instructions count: "
	@./push_swap $(ARG) | wc -l