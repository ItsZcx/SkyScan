/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** get_move
*/

#include "lib.h"

void get_move(Plane *st_plane, int index)
{
    float mx = st_plane[index].plane_finish.x - st_plane[index].position.x;
    float my = st_plane[index].plane_finish.y - st_plane[index].position.y;
    float move_x = mx / sqrt(pow(mx, 2) + pow(my, 2));
    float move_y = my / sqrt(pow(mx, 2) + pow(my, 2));
    st_plane[index].plane_move.x = move_x * st_plane[index].plane_vel;
    st_plane[index].plane_move.y = move_y * st_plane[index].plane_vel;
    st_plane[index].angle = atan2(my, mx) * 180 / M_PI;
}
