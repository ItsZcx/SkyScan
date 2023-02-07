/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** get_plane_distance
*/

#include "lib.h"

float get_plane_distance(Plane *st_plane, int p2_index, int p_index)
{
    float plane_distance = sqrt(pow(abs(((st_plane[p_index].position.y + 10) -
        (st_plane[p2_index].check_crash.y + 10))), 2) +
        pow(abs((st_plane[p_index].position.x + 10) -
        (st_plane[p2_index].check_crash.x + 10)), 2));

    return (plane_distance);
}
