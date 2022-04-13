/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** init_struct
*/

#include <stdio.h>
#include <stdlib.h>

#include "solver.h"
#include "my.h"

static void check_map(solver_t *solver)
{
    int y_max;

    for (y_max = 0; solver->map[y_max] != NULL; y_max++) {
        solver->x_max = my_strlen(solver->map[y_max]);
    }
    solver->y_max = y_max;
}

static void init_values(solver_t *solver)
{
    solver->x = 0;
    solver->y = 0;
    solver->x_max = 0;
    solver->y_max = 0;
    solver->compt_sym_o = 0;
    solver->compt_star = 0;
    solver->compt_x = 0;
    solver->post_x = 0;
    solver->post_y = 0;
    solver->result = 0;
}

static int error_handling(solver_t * solver)
{
    for (int i = 0; i < solver->y_max - 1; i++) {
        for (int j = 0; j < solver->x_max; j++) {
            if (solver->map[i][j] != 'X' && solver->map[i][j] != '*'
                && solver->map[i][j] != '\0') {
                return -1;
            }
        }
    }
    return 0;
}

static int check_arg(solver_t *solver, char const *file)
{
    init_values(solver);
    if (get_map(file, solver) == -1) {
        solver->result = 84;
        return 84;
    }
    check_map(solver);
    if (error_handling(solver) == -1) {
        solver->result = 84;
        return 84;
    }
    return 0;
}

int init_struct(char const *file, solver_t *solver)
{
    if (check_arg(solver, file) == 84) {
        return 84;
    }
    if (solver->map[0][0] != '*' ||
        solver->map[solver->y_max - 1][solver->x_max - 1] != '*') {
        if (solver->map[0][0] == 'X' ||
        solver->map[solver->y_max - 1][solver->x_max - 1] == 'X') {
            my_putstr("not solution found\n");
            return -1;
        } else {
            solver->result = 84;
            return 84;
        }
    }
    return 0;
}