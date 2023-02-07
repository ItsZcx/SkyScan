/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** plane_take_off
*/

#include "lib.h"

void plane_take_off(Plane *st_plane, Info *st_amounts, int p_index)
{
    if (is_plane_not_flying(st_plane, p_index) &&
        !status_inside_tower(st_plane, p_index) &&
        if_has_to_take_off(st_plane, st_amounts, p_index))
        st_plane[p_index].life = FLYING;
}
