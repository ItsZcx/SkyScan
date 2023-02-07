/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** if_out_screen
*/

#include "lib.h"

bool if_out_screen(Plane *st_plane, int index)
{
    if (st_plane[index].position.x > 1920 || st_plane[index].position.x < 0 &&
        st_plane[index].position.y > 1080 || st_plane[index].position.y < 0)
        return (true);
    if (st_plane[index].position.x < 1920 || st_plane[index].position.x > 0 &&
        st_plane[index].position.y < 1080 || st_plane[index].position.y > 0)
        return (false);
}
