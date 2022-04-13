/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** check_obstacle_bis
*/

#include "solver.h"

static int check_obs_bis(solver_t *solver, int compt)
{
    if (solver->map[solver->y - 1][solver->x] == '#' ||
        solver->map[solver->y - 1][solver->x] == 'X') {
        compt += 1;
    } else if (solver->map[solver->y - 1][solver->x] == 'o') {
        solver->compt_sym_o += 1;
    }
    return compt;
}

int check_obstacle_tree(solver_t *solver, int compt)
{
    if (solver->y != 0) {
        compt = check_obs_bis(solver, compt);
    } else {
        compt += 1;
    }
    return compt;
}