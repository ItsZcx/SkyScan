/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** my_strlen
*/

#include "lib.h"

int my_strlen(char *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return (count);
}
