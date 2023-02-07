/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** is_plane_inside_tower
*/

#include "lib.h"

bool is_plane_inside_tower(Plane *st_plane, int p_index)
{
    if (st_plane[p_index].inside_tower == true)
        return (true);
    if (st_plane[p_index].inside_tower == false)
        return (false);
}
