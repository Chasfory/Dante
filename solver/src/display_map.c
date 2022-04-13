/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** display_map
*/

#include "solver.h"
#include "my.h"

static void scotch(solver_t *solver)
{
    if (solver->y_max > 1) {
        if (solver->map[0][solver->x_max - 1] == 'o' &&
        (solver->map[solver->y_max - (solver->y_max - 1)][solver->x_max - 1] ==
        '#' || solver->map[solver->y_max - (solver->y_max - 1)]
        [solver->x_max - 1] == 'X') && (solver->map[0][solver->x_max - 2] ==
        '#' || solver->map[0][solver->x_max - 2] == 'X')) {
            solver->map[0][solver->x_max - 1] = '*';
        }
        if (solver->map[solver->y_max - 1][0] == 'o' &&
        (solver->map[solver->y_max - 2][0] == '#' ||
        solver->map[solver->y_max - 2][0] == 'X') &&
        (solver->map[solver->y_max - 1][solver->x_max -
        (solver->x_max - 1)] == '#' ||
        solver->map[solver->y_max - 1][solver->x_max -
        (solver->x_max - 1)] == 'X')) {
            solver->map[solver->y_max - 1][0] = '*';
        }
    }
}

void map_display(solver_t *solver)
{
    scotch(solver);
    for (int i = 0; i < solver->y_max; i++) {
        for (int j = 0; solver->map[i][j] != '\0'; j++) {
            if (solver->map[i][j] == '#') {
                solver->map[i][j] = '*';
            }
        }
        my_putstr(solver->map[i]);
        if (i < solver->y_max - 1) {
            my_putchar('\n');
        }
    }
}