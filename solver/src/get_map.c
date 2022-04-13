/*
** EPITECH PROJECT, 2021
** B-CPE-200-PAR-2-2-dante-ethan.hayot
** File description:
** get_map
*/

#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#include "solver.h"
#include "my.h"

int get_map(char const *file, solver_t *solver)
{
    struct stat stats;
    int fd = open(file, O_RDONLY);
    char *buffer = NULL;

    if (stat(file, &stats) == -1) {
        return -1;
    }
    buffer = malloc(sizeof(char) * (stats.st_size + 1));
    if (fd == -1 || stats.st_size == 0) {
        return -1;
    }
    if (read(fd, buffer, stats.st_size) == -1) {
        return -1;
    }
    buffer[stats.st_size] = '\0';
    solver->map = str_to_word_array(buffer, '\n');
    free(buffer);
    close(fd);
    return 0;
}