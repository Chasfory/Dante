/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** game_solver
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "solver.h"
#include "my.h"
#include "last_position.h"

static int check_result(solver_t *solver, last_position_t *array)
{
    if (solver->x == 0 && solver->y == 0) {
        return -1;
    }
    if (solver->x == (solver->x_max - 1) &&
        solver->y == (solver->y_max - 1)) {
        solver->map[solver->y][solver->x] = 'o';
        return 1;
    }
    if (solver->compt_star == 0) {
        solver->map[solver->y][solver->x] = '#';
        array_pop(array, 1);
    }
    return 0;
}

static int check_mouv_laby(solver_t *solver, last_position_t *array)
{
    int mouv = 0;
    int result = 0;

    if ((solver->compt_x + solver->compt_sym_o) == 4) {
        check_wall(solver);
        while (solver->compt_star == 0 && result == 0) {
            solver->x = array->array[array->size - 1].x;
            solver->y = array->array[array->size - 1].y;
            mouv = check_start(solver, mouv);
            result = check_result(solver, array);
            mouv = 0;
        }
    }
    return result;
}

static int action_laby(solver_t *solver, last_position_t *array)
{
    if (check_mouv_laby(solver, array) == -1) {
        return -1;
    }
    if (solver->x == (solver->x_max - 1) &&
        solver->y == (solver->y_max - 1)) {
        solver->map[solver->y][solver->x] = 'o';
        return 1;
    }
    solver->compt_sym_o = 0;
    solver->compt_x = 0;
    solver->compt_star = 0;
    return 0;
}

int gameplay(solver_t *solver, last_position_t *array, int win)
{
    pos_t pos = {0};
    int mouv = 0;

    while (win == 0) {
        pos.x = solver->post_x;
        pos.y = solver->post_y;
        array_add(array, &pos);
        mouv = mouv_down(solver, mouv);
        mouv = mouv_left(solver, mouv);
        mouv = mouv_right(solver, mouv);
        mouv = mouv_top(solver, mouv);
        win = action_laby(solver, array);
        mouv = 0;
    }
    return win;
}