/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** draw_planes
*/

#include "lib.h"

int draw_planes(Win *st_win, Plane *st_plane, Info *st_amounts, int index)
{
    if (st_plane[index].life != DEAD) {
        sfRectangleShape_setOutlineColor(st_plane[index].plane_sprt, sfWhite);
        if (l_activated(st_amounts))
            sfRectangleShape_setOutlineColor(
                st_plane[index].plane_sprt, sfTransparent);
        if (if_has_to_take_off(st_plane, st_amounts, index)
            && !s_activated(st_amounts) && !n_activated(st_amounts))
            sfRenderWindow_drawRectangleShape(
                st_win->wind, st_plane[index].plane_sprt, NULL);
        if (if_has_to_take_off(st_plane, st_amounts, index))
            sfRectangleShape_move(st_plane[index].plane_sprt,
                st_plane[index].plane_move);
        draw_planes_landing(st_win, st_plane, st_amounts, index);
    }
}
