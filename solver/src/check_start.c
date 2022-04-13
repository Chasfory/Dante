/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** check_start
*/

#include <stdio.h>
#include <unistd.h>

#include "solver.h"
#include "my.h"

static int check_start_bis(solver_t *solver, int mouv)
{
    if (solver->y != 0) {
        if (solver->map[solver->y - 1][solver->x] == '*') {
            solver->compt_star += 1;
            mouv += 1;
        }
    }
    if (solver->x != 0) {
        if (solver->map[solver->y][solver->x - 1] == '*') {
            solver->compt_star += 1;
            mouv += 1;
        }
    }
    return mouv;
}

int check_start(solver_t *solver, int mouv)
{
    if (solver->x <= solver->x_max) {
        if (solver->map[solver->y][solver->x + 1] == '*') {
            solver->compt_star += 1;
            mouv += 1;
        }
    }
    if (solver->y < (solver->y_max - 1)) {
        if (solver->map[solver->y + 1][solver->x] == '*') {
            solver->compt_star += 1;
            mouv += 1;
        }
    }
    mouv = check_start_bis(solver, mouv);
    return mouv;
}