/*
** EPITECH PROJECT, 2022
** my_get_float
** File description:
** num in string to digits
*/

#include "lib.h"

int is_float(char *str)
{
    int find_dot = 0;

    for (int index = 0; str[index]; index++) {
        if (str[index] == '.')
            find_dot++;
    }
    return (find_dot);
}

float my_get_after_dot(char *str, int *loop, float *decimal_num, int find_dot)
{
    while (str[(*loop)] != '\0' && find_dot != 0) {
        if (str[(*loop)] >= '0' && str[(*loop)] <= '9') {
            (*decimal_num) = (*decimal_num) * 10;
            (*decimal_num) = (*decimal_num) + str[(*loop)] - '0';
        }
        (*loop)++;
    }
}

float my_get_sign(char *str, int loop, int if_neg)
{
    while (str[loop] && str[loop] == '+' || str[loop] == '-') {
        if (str[loop] == '-')
            if_neg = if_neg * -1;
        loop++;
    }
}

float my_get_float(char *str)
{
    float num = 0;
    int loop = 0;
    int if_neg = 1;
    float decimal_num = 0;
    int find_dot = is_float(str);

    my_get_sign(str, loop, if_neg);
    while (str[loop] != '\0' && str[loop] != '.') {
        if (str[loop] >= '0' && str[loop] <= '9') {
            num = num * 10;
            num = num + str[loop] - '0';
            loop++;
        } else
            return (num * if_neg);
    }
    my_get_after_dot(str, &loop, &decimal_num, find_dot);
    if (find_dot != 0)
        return ((num * if_neg) + (decimal_num * 0.1));
    return (num * if_neg);
}
