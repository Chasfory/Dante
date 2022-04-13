/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** mouv_map
*/

#include "solver.h"
#include "last_position.h"

static void action_mouv(solver_t *solver, int x, int y)
{
    if (solver->map[y][x] == 'X') {
        solver->compt_x += 1;
    } else if (solver->map[y][x] == 'o') {
        solver->compt_sym_o += 1;
    } else {
        solver->compt_x += 1;
    }
}

int mouv_right(solver_t *solver, int mouv)
{
    if (solver->x != 0 && mouv != 1) {
        if (solver->map[solver->y][solver->x - 1] == '*') {
            solver->map[solver->y][solver->x] = 'o';
            solver->post_x = solver->x;
            solver->post_y = solver->y;
            solver->x -= 1;
            solver->compt_star += 1;
            mouv = 1;
        } else {
            action_mouv(solver, (solver->x - 1), solver->y);
        }
    } else {
        solver->compt_x += 1;
    }
    return mouv;
}

int mouv_top(solver_t *solver, int mouv)
{
    if (solver->y != 0 && mouv != 1) {
        if (solver->map[solver->y - 1][solver->x] == '*') {
            solver->map[solver->y][solver->x] = 'o';
            solver->post_x = solver->x;
            solver->post_y = solver->y;
            solver->y -= 1;
            solver->compt_star += 1;
            mouv = 1;
        } else {
            action_mouv(solver, solver->x, (solver->y - 1));
        }
    } else {
        solver->compt_x += 1;
    }
    return mouv;
}

int mouv_down(solver_t *solver, int mouv)
{
    if (solver->y < (solver->y_max - 1) && mouv != 1) {
        if (solver->map[solver->y + 1][solver->x] == '*') {
            solver->map[solver->y][solver->x] = 'o';
            solver->post_x = solver->x;
            solver->post_y = solver->y;
            solver->y += 1;
            solver->compt_star += 1;
            mouv = 1;
        } else {
            action_mouv(solver, solver->x, (solver->y + 1));
        }
    } else {
        solver->compt_x += 1;
    }
    return mouv;
}

int mouv_left(solver_t *solver, int mouv)
{
    if (solver->x < solver->x_max && mouv != 1) {
        if (solver->map[solver->y][solver->x + 1] == '*') {
            solver->map[solver->y][solver->x] = 'o';
            solver->post_x = solver->x;
            solver->post_y = solver->y;
            solver->x += 1;
            solver->compt_star += 1;
            mouv = 1;
        } else {
            action_mouv(solver, (solver->x + 1), solver->y);
        }
    } else {
        solver->compt_x += 1;
    }
    return 0;
}