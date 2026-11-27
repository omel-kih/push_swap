
NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

LIBFT = libft/libft.a
FT_PRINTF = ft_printf/libftprintf.a
LIBS = $(FT_PRINTF) $(LIBFT)

INCLUDES = -Isrcs \
           -Isrcs/operations \
           -Isrcs/parsing \
           -Isrcs/sorting \
           -Ilibft \
           -Ift_printf0

OPERATIONS = srcs/operations/op_pushswap.c \
             srcs/operations/op_rev_rotate.c \
             srcs/operations/op_rotate.c \
             srcs/operations/push_pop.c

PARSING = srcs/parsing/flags_check.c \
          srcs/parsing/numbers_check.c \
          srcs/parsing/parsing_res.c

SORTING = srcs/sorting/mini_sort/sort_four_five.c \
          srcs/sorting/mini_sort/sort_three.c \
          srcs/sorting/simple_sort/simple_sort.c \
          srcs/sorting/simple_sort/simple_units.c \
          srcs/sorting/sort_manager.c 

MANAGER = srcs/manager.c \
          main.c

SRCS = $(OPERATIONS) $(PARSING) $(SORTING) $(MANAGER)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

$(LIBFT):
	$(MAKE) -C libft

$(FT_PRINTF):
	$(MAKE) -C ft_printf

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C libft clean
	$(MAKE) -C ft_printf clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C libft fclean
	$(MAKE) -C ft_printf fclean

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
