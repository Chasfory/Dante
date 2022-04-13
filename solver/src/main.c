/*
** EPITECH PROJECT, 2021
** antman
** File description:
** solver
*/

#include "solver.h"
#include "last_position.h"

int main(int ac, char **av)
{
    solver_t solver;
    last_position_t array;
    int result = 0;
    int result_bis = 0;

    if (ac != 2) {
        return 84;
    }
    result_bis = array_create(&array, 1);
    result = init_struct(av[1], &solver);
    if (result != 0 || result_bis != 0) {
        return solver.result;
    }
    if (game_solver(&solver, &array) == -1) {
        return 84;
    }
    return 0;
}
