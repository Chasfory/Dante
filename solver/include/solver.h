/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** solver
*/

#ifndef SOLVER_H_
#define SOLVER_H_

#include <stdbool.h>

#include "last_position.h"

typedef struct solver_s {
    int x;
    int y;
    int x_max;
    int y_max;
    int post_x;
    int post_y;
    int compt_x;
    int compt_star;
    int compt_sym_o;
    int result;
    char **map;
} solver_t;

// gameplay
int game_solver(solver_t *solver, last_position_t *array);

// game_solver
int gameplay(solver_t *solver, last_position_t *array, int win);

// get_map
int get_map(char const *file, solver_t *solver);

// init_struct
int init_struct(char const *file, solver_t *solver);

// check_start
int check_start(solver_t *solver, int mouv);

// mouv_map
int mouv_left(solver_t *solver, int mouv);
int mouv_down(solver_t *solver, int mouv);
int mouv_top(solver_t *solver, int mouv);
int mouv_right(solver_t *solver, int mouv);

// display_map
void map_display(solver_t *solver);

// check_obstacle
void check_wall(solver_t *solver);

// check_obstacle_bis
int check_obstacle_tree(solver_t *solver, int compt);

// exception_map
int exception_map(solver_t *solver);

#endif /* !SOLVER_H_ */