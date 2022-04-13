/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** exception_map
*/

#include "solver.h"

int exception_map(solver_t *solver)
{
    if (solver->y_max == 1 && solver->x_max == 1) {
        solver->map[0][0] = 'o';
        return -1;
    }
    return 0;
}