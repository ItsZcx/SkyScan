/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** check_if_all_died
*/

#include "lib.h"

void check_if_all_died(Plane *st_plane, Info *st_amounts, int p_index)
{
    if (st_plane[p_index].life == DEAD)
        st_amounts->alive--;
}
