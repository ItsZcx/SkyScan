/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** is_plane_dead
*/

#include "lib.h"

bool is_plane_dead(Plane *st_plane, int p_index)
{
    if (st_plane[p_index].life == DEAD)
        return (true);
    if (st_plane[p_index].life != DEAD)
        return (false);
}
