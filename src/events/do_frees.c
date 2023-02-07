/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** do_frees
*/

#include "lib.h"

void do_frees(Win *st_win, Plane *st_plane, Tower *st_tower, Info *st_amounts)
{
    sfText_destroy(st_amounts->text);
    sfFont_destroy(st_amounts->font);
    sfClock_destroy(st_amounts->clock);
    sfRenderWindow_destroy(st_win->wind);
    sfSprite_destroy(st_win->bg_sprt);
    sfTexture_destroy(st_win->bg_txt);
    for (int index = st_amounts->amount_planes - 1; index != 0; index--) {
        sfTexture_destroy(st_plane[index].plane_txt);
        sfRectangleShape_destroy(st_plane[index].plane_sprt);
    }
    for (int index2 = st_amounts->amount_towers - 1; index2 != 0; index2--) {
        sfTexture_destroy(st_tower[index2].tower_txt);
        sfSprite_destroy(st_tower[index2].tower_sprt);
        sfCircleShape_destroy(st_tower[index2].circle);
    }
    free(st_win);
    free(st_plane);
    free(st_tower);
    free(st_amounts);
}
