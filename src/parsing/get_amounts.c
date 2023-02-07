/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** get_amounts
*/

#include "lib.h"

void get_entity_amounts(char *arr, int *a_count, int *b_count)
{
    for (int k = 0; arr[k] != '\n' && arr[k] != '\0'; k++) {
        if (arr[k] == 'A')
            (*a_count)++;
        if (arr[k] == 'T')
            (*b_count)++;
    }
}

void get_amounts(char ***arr, Info *st_amounts)
{
    int a_count = 0;
    int b_count = 0;

    for (int i = 0; arr[i]; i++) {
        for (int p = 0; arr[i][p]; p++) {
            get_entity_amounts(arr[i][p], &a_count, &b_count);
        }
    }
    st_amounts->amount_planes = a_count;
    st_amounts->amount_towers = b_count;
}
