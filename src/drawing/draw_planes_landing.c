/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** draw_planes_landing
*/

#include "lib.h"

int draw_planes_landing(Win *st_win, Plane *st_plane,
    Info *st_amounts, int index)
{
    float arrival_distance = sqrt(pow(abs(((st_plane[index].position.y + 10) -
        (st_plane[index].plane_finish.y + 10))), 2) +
        pow(abs((st_plane[index].position.x + 10) -
        (st_plane[index].plane_finish.x + 10)), 2));

    if (if_plane_arrived(arrival_distance))
            st_plane[index].life = DEAD;
    if (if_out_screen(st_plane, index))
        st_plane[index].life = DEAD;
}
