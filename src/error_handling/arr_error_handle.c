/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** arr_error_handle
*/

#include "lib.h"

void arr_error_handle2(char *arr, int *bsn_count)
{
    for (int k = 0; arr[k] != '\0'; k++) {
        if (arr[k] == '\n')
            (*bsn_count)++;
    }
}

int arr_error_handle(Info *st_amounts, char ***arr)
{
    int bsn_count = 0;

    for (int i = 0; arr[i]; i++) {
        for (int p = 0; arr[i][p]; p++)
            arr_error_handle2(arr[i][p], &bsn_count);
    }
    if (bsn_count !=
        st_amounts->amount_planes * 7 + st_amounts->amount_towers * 4)
        return (84);
    return (0);
}
