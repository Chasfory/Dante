/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** gameplay
*/

#include "solver.h"
#include "my.h"
#include "last_position.h"

static void free_map(solver_t *solver, last_position_t *array)
{
    for (int i = 0; i < solver->y_max; i++) {
        free(solver->map[i]);
    }
    free(solver->map);
    array_destroy(array);
}

int game_solver(solver_t *solver, last_position_t *array)
{
    int win = 0;

    if (exception_map(solver) == -1)
        win = 1;
    win = gameplay(solver, array, win);
    if (win == -1) {
        my_putstr("not solution found\n");
    }
    else
        map_display(solver);
    free_map(solver, array);
    return 0;
}