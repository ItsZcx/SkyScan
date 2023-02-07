/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** status_inside_tower
*/

#include "lib.h"

bool status_inside_tower(Plane *st_plane, int p_index)
{
    if (st_plane[p_index].life == INSIDE_TOWER)
        return (true);
    if (st_plane[p_index].life != INSIDE_TOWER)
        return (false);
}
