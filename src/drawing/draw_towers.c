/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** draw_towers
*/

#include "lib.h"

int draw_towers(Win *st_win, Tower *st_tower, Info *st_amounts)
{
    for (int index = 0; index < st_tower->tower_amount; index++) {
        sfCircleShape_setOutlineColor(st_tower[index].circle, sfWhite);
        if (l_activated(st_amounts) || n_activated(st_amounts))
            sfCircleShape_setOutlineColor(
                st_tower[index].circle, sfTransparent);
        if (!s_activated(st_amounts) && !n_activated(st_amounts))
            sfRenderWindow_drawSprite(
                st_win->wind, st_tower[index].tower_sprt, NULL);
        sfRenderWindow_drawCircleShape(
            st_win->wind, st_tower[index].circle, NULL);
    }
}
