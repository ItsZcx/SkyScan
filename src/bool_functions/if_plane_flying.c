/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** if_plane_flying
*/

#include "lib.h"

bool if_plane_flying(Plane *st_plane, int index)
{
    if (st_plane[index].life == FLYING)
        return (true);
    if (st_plane[index].life != FLYING)
        return (false);
}
