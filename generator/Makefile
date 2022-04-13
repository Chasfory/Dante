##
## EPITECH PROJECT, 2021
## p
## File description:
## p
##

NAME	=	generator

SRC_DIR =       src/

SRC     =	$(SRC_DIR)main.c	\
			$(SRC_DIR)map.c	\
			$(SRC_DIR)error.c	\

OBJ	=	$(SRC:.c=.o)

LDFLAGS	=	-L lib/my -lmy

CPPFLAGS	=	-I include

CFLAGS	=	-Wall -Wextra -O2

all:	$(NAME)

$(NAME):	$(OBJ)
	@ make -C lib/my
	@ echo "[INFO]: lib compiled !"
	@ gcc -o $(NAME) $(OBJ) $(LDFLAGS)
	@ echo "[OK]: Compiled succesfully !"

.o:	%.c
	@ echo "[INFO]: Compiling" $<
	@ gcc -o $@ -c $< $(LDFLAGS)

clean:
	@ make clean -C lib/my
	@ echo "[INFO]: Removed compiled files"
	@ $(RM) $(OBJ)
	@ echo "[INFO]: Removed useless files"

fclean:	clean
	@ make fclean -C lib/my
	@ echo "[INFO]: removed lib"
	@ $(RM) $(NAME)
	@ echo "[INFO]: Removed binary ->" $(NAME)

re:	fclean all
