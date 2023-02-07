/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** handle_planes
*/

#include "lib.h"

void plane_plane_status(Plane *st_plane, int p2_index, int p_index)
{
    st_plane[p2_index].check_crash = sfRectangleShape_getPosition(
        st_plane[p2_index].plane_sprt);
    float plane_distance = get_plane_distance(st_plane, p2_index, p_index);

    if (!if_same_plane(p_index, p2_index) &&
        if_plane_flying(st_plane, p_index) &&
        if_plane_flying(st_plane, p2_index) &&
        planes_crashing(plane_distance)) {
        st_plane[p_index].life = DEAD;
        st_plane[p2_index].life = DEAD;
    }
}

void handle_planes(Plane *st_plane, int p_index)
{
    for (int p2_index = 0; p2_index < st_plane->plane_amount; p2_index++)
        plane_plane_status(st_plane, p2_index, p_index);
}
