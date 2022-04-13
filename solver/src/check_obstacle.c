/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** check_obstacle
*/

#include <stdio.h>
#include <unistd.h>

#include "solver.h"
#include "my.h"
#include "last_position.h"

void check_wall(solver_t *solver)
{
    solver->map[solver->y][solver->x] = '#';
    solver->compt_sym_o = 0;
}