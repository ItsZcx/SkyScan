/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** read_map
*/

#include "lib.h"

char *change_lastchar(char *src)
{
    int index = 0;
    char *result = malloc(sizeof(char) * (my_strlen(src) + 2));

    while (src[index] && src[index] != '\n') {
        if (src[index] == '\t') {
            result[index] = ' ';
            index++;
        }
        result[index] = src[index];
        index++;
    }
    result[index] = ' ';
    result[index + 1] = '\0';
    return (result);
}

int amount_of_lines(int ac, char **av)
{
    FILE *fd = fopen(av[1], "r");
    size_t len = 0;
    char *line_read = NULL;
    int num = 1;

    while (getline(&line_read, &len, fd) != -1)
        num++;
    fclose(fd);
    return (num);
}

char ***read_map(int ac, char **av, Info *st_amounts)
{
    int j = 0;
    FILE *fd = fopen(av[1], "r");
    size_t len = 0;
    char *line_read = NULL;
    char ***arr = malloc(sizeof(char*) * (amount_of_lines(ac, av)));

    while (getline(&line_read, &len, fd) != -1) {
        char *tmp = change_lastchar(my_strdup(line_read));
        arr[j] = my_str_to_word_array(tmp, ' ');
        j++;
    }
    arr[j] = NULL;
    fclose(fd);
    get_amounts(arr, st_amounts);
    return (arr);
}
