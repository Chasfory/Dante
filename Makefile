##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## nherbal
##

all:
	${MAKE} -C solver/
	${MAKE} -C generator/

fclean:
	${MAKE} fclean -C solver/
	${MAKE} fclean -C generator/

clean:
	${MAKE} clean -C solver/
	${MAKE} clean -C generator/

re: fclean
	${MAKE} -C solver/
	${MAKE} -C generator/

.phony: all clean fclean re
