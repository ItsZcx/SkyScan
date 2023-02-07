/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** is_plane_not_flying
*/

#include "lib.h"

bool is_plane_not_flying(Plane *st_plane, int p_index)
{
    if (st_plane[p_index].life == NOT_FLYING)
        return (true);
    if (st_plane[p_index].life != NOT_FLYING)
        return (false);
}
