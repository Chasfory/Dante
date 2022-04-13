##
## EPITECH PROJECT, 2021
## p
## File description:
## p
##

SRC			=	src/main.c\
				src/game_solver.c\
				src/get_map.c\
				src/init_struct.c\
				src/display_map.c\
				src/check_start.c\
				src/last_position.c\
				src/mouv_map.c\
				src/check_obstacle.c\
				src/exception_map.c\
				src/check_obstacle_bis.c\
				src/gameplay.c\

OBJ			=	$(SRC:.c=.o)

NAME		=	solver

CFLAGS		=	-Wall -Wextra -O2

CPPFLAGS	=	-iquote ./include

LDFLAGS		=	-L ./lib -lmy

CC			=	gcc

all: $(NAME)
$(NAME): $(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

debug: CFLAGS += -g3
debug: re

clean:
	$(RM) $(OBJ)
	$(MAKE) -C ./lib/my clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re: fclean all

./PHONY: all clean fclean
