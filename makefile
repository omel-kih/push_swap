
NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

LIBS = libft/libft.a \
       ft_printf/libftprintf.a

OPERATIONS = srcs/operations/op_rev_rotate.c \
             srcs/operations/op_pushswap.c \
             srcs/operations/op_rotate.c

PARSING = srcs/parsing/flags_check.c \
          srcs/parsing/numbers_check.c \
          srcs/parsing/parsing_res.c

MANAGER = srcs/manager.c main.c

SRCS = $(OPERATIONS) $(PARSING) $(MANAGER)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBS)
	$(CC) $(CFLAGS) -Ilibft -Ift_printf $(OBJS) $(LIBS) -o $(NAME)

libft/libft.a:
	$(MAKE) -C libft

ft_printf/libftprintf.a:
	$(MAKE) -C ft_printf

%.o: %.c
	$(CC) $(CFLAGS) -Ilibft -Ift_printf -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C libft clean
	$(MAKE) -C ft_printf clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C libft fclean
	$(MAKE) -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
