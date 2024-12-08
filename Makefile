# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 19:03:24 by dgulec            #+#    #+#              #
#    Updated: 2024/10/30 17:42:52 by dgulec           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a
SRCS = ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_puthex.c \
	ft_putptr.c \
	ft_puthex.c \
	which_format.c \

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_INC = -I $(LIBFT_DIR)

LIBFT_OBJS = $(LIBFT_DIR)/ft_strlen.o

.SILENT:

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(LIBFT_INC) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT)
	@echo "\033[34m ft_printf library is compiled^^  \033[0m"
	cp $(LIBFT) .
		mv libft.a $(NAME)
		ar -rcs $(NAME) $(OBJS)
	

$(LIBFT):
	@echo "\033[32m Compiling libft library... \033[0m"
	$(MAKE) -C $(LIBFT_DIR)

clean:
	@echo "\033[31m cleaned object files^^\033[0m"
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all