/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** error_handle
*/

#include "lib.h"

int error_handle(int ac, char **av)
{
    if (ac != 2) {
        my_putstr("./SkyScan: bad arguments: ");
        my_put_nbr(ac - 1);
        my_putstr(" given but 1 is required\nretry with -h\n");
        return (84);
    }
    struct stat info;
    stat(av[1], &info);
    if ((info.st_mode & S_IFMT) != S_IFREG)
        return (84);
    if ((info.st_mode & S_IXUSR) != 0 || (info.st_mode & S_IXGRP) != 0
        || (info.st_mode & S_IXOTH) != 0)
        return (84);
    if (info.st_size == 0)
        return (84);
    return (0);
}
