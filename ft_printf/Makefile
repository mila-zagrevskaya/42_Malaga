# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/09 16:39:00 by lzahrevs          #+#    #+#              #
#    Updated: 2024/06/26 17:21:03 by lzahrevs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar
ARFLAGS = rcs

SOURCES = ft_printf.c ft_putchar.c ft_putstr.c ft_putptr.c ft_putnbr.c \
			ft_putdns.c ft_puthex.c

OBJECTS	= $(SOURCES:.c=.o)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all : $(LIBFT) $(NAME)

$(LIBFT) :
	make -C $(LIBFT_PATH)

$(NAME): $(OBJECTS)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

clean :
	make clean -C $(LIBFT_PATH)
	$(RM) $(OBJECTS)

fclean : clean
	make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re	:	fclean all

.PHONY:	all clean fclean re libft