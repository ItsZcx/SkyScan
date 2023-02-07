/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** help
*/

#include "lib.h"
#include <unistd.h>

int my_strcmp(char *str_1, char *str_2)
{
    int index = 0;

    if (my_strlen(str_1) != my_strlen(str_2))
        return (-1);
    while (str_1[index] != '\0' && str_2[index] != '\0') {
        if (str_1[index] != str_2[index])
            return (-1);
        index++;
    }
    return (0);
}

int help(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        my_putstr("Air traffic simulation panel\n\n");
        my_putstr("USAGE\n");
        my_putstr("  ./SkyScan [OPTIONS] path_to_script\n");
        my_putstr("    path_to_script     The path to the script file.\n\n");
        my_putstr("OPTIONS\n");
        my_putstr("  -h                   print usage and quit.\n\n");
        my_putstr("USER INTERACTIONS\n");
        my_putstr("  'L'           key enable/disable hitboxes and areas.\n");
        my_putstr("  'S'           key enable/disable sprites.\n");
        my_putstr("  'N'           key enable/disable ");
        my_putstr("sprites, hitboxes and areas.\n");
        return (1);
    }
    return (0);
}
