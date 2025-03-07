# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzahrevs <lzahrevs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 13:18:09 by lzahrevs          #+#    #+#              #
#    Updated: 2025/03/04 14:24:17 by lzahrevs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	so_long
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
MLX			=	mlx/Makefile.gen
LFT			=	libft/libft.a
INC			=	-I ./src -I ./libft -I ./mlx
LIB			=	-L ./libft -lft -L ./mlx -lX11 -lXext -lm -lmlx -lbsd
OBJ			=	$(SRC:.c=.o)
GREEN		=	\033[0;32m
RED 		=	\033[0;31m
YELLOW		=	\033[0;33m
RESET		=	\033[0m
SRC			=	src/exit_with_error.c \
				src/render_game.c \
				src/controls.c \
				src/free_game.c \
				src/init_game.c \
				src/map_size.c \
				src/file_utils.c \
				src/map_validation.c \
				src/map_parsing.c \
				src/setup_map_structure.c \
				src/utils.c \
				src/move_player.c \
				src/cleanup_and_exit.c \
				src/game_textures.c \
				src/so_long.c \
				src/game_update.c

all:		$(MLX) $(LFT) $(NAME)

$(NAME):	$(OBJ)
			@echo "$(RED)[ .. ] Compiling Mandatory..$(RESET)"
			@$(CC) $(FLAGS) -fsanitize=address -o $@ $^ $(LIB)
			@echo "$(GREEN)[ OK ]$(RESET) $(YELLOW)Mandatory Ready!$(RESET)"

$(MLX):
			@echo "$(RED)[ .. ] | Compiling minilibx..$(RESET)"
			@make -s -C mlx
			@echo "$(GREEN)[ OK ]$(RESET)|$(YELLOW)Minilibx ready!$(RESET)"

$(LFT):
			@echo "$(RED)[ .. ] Compiling Libft..$(RESET)"
			@make -s -C libft
			@echo "$(GREEN)[ OK ]$(RESET) $(YELLOW)Libft ready!$(RESET)"

src/%.o:	src/%.c
			@$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean:
			@make -s $@ -C libft
			@rm -rf $(OBJ) src/*.o
			@echo "Object files removed."

fclean:		clean
			@make -s $@ -C libft
			@rm -rf $(NAME)
			@echo "Binary file removed."

re:			fclean all

.PHONY:		all clean fclean re
