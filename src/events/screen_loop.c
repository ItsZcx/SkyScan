/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** screen_loop
*/

#include "lib.h"

int screen_loop(Win *st_win, Plane *st_plane,
    Tower *st_tower, Info *st_amounts)
{
    sfRenderWindow_clear(st_win->wind, sfBlack);
    sfRenderWindow_drawSprite(st_win->wind, st_win->bg_sprt, NULL);
    sfRenderWindow_drawText(st_win->wind, st_amounts->text, NULL);
    draw_towers(st_win, st_tower, st_amounts);
    for (int index = 0; index < st_plane->plane_amount; index++)
        draw_planes(st_win, st_plane, st_amounts, index);
    sfRenderWindow_display(st_win->wind);
}
