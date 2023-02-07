/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** structs
*/

#include "lib.h"

void info_struct(Info *st_amounts)
{
    st_amounts->clock = sfClock_create();
    st_amounts->time = 0;
    st_amounts->text = sfText_create();
    st_amounts->font = sfFont_createFromFile("./assets/font/University.otf");
    sfText_setFont(st_amounts->text, st_amounts->font);
    sfText_setPosition(st_amounts->text, (sfVector2f){1850, 45});
    st_amounts->sec_value = 1;
    st_amounts->l_pressed = false;
    st_amounts->s_pressed = false;
    st_amounts->n_pressed = false;
}

void plane_struct(Plane *st_plane)
{
    for (int index = 0; index < st_plane->plane_amount; index++) {
        st_plane[index].plane_rect = (sfIntRect){0, 0, 20, 20};
        st_plane[index].plane_sprt = sfRectangleShape_create();
        st_plane[index].plane_txt = sfTexture_createFromFile(
            "assets/sprites/plane.png", NULL);
        sfRectangleShape_setTexture(
            st_plane[index].plane_sprt, st_plane[index].plane_txt, sfFalse);
        sfRectangleShape_setSize(st_plane[index].plane_sprt,
            (sfVector2f){20, 20});
        sfRectangleShape_setPosition(
            st_plane[index].plane_sprt, st_plane[index].position);
        sfRectangleShape_setOutlineColor(st_plane[index].plane_sprt, sfWhite);
        sfRectangleShape_setOutlineThickness(st_plane[index].plane_sprt, 1);
        get_move(st_plane, index);
        st_plane[index].life = NOT_FLYING;
        sfRectangleShape_setRotation(st_plane[index].plane_sprt,
            st_plane[index].angle);
    }
}

void tower_struct(Tower *st_tower)
{
    for (int index = 0; index < st_tower->tower_amount; index++) {
        st_tower[index].tower_rect = (sfIntRect){0, 0, 20, 30};
        st_tower[index].circle_pos = (sfVector2f){st_tower[index].tower_pos.x
            - (st_tower[index].tower_rad) + (st_tower[index].tower_rect.width
            / 2), st_tower[index].tower_pos.y - (st_tower[index].tower_rad) +
            (st_tower[index].tower_rect.height / 2) - 5};
        st_tower[index].tower_sprt = sfSprite_create();
        st_tower[index].tower_txt = sfTexture_createFromFile(
            "assets/sprites/tower.png", NULL);
        st_tower[index].circle = create_circle(st_tower[index].circle_pos,
            st_tower[index].tower_rad);
        sfSprite_setTexture(
            st_tower[index].tower_sprt, st_tower[index].tower_txt, sfFalse);
        sfSprite_setTextureRect(
            st_tower[index].tower_sprt, st_tower[index].tower_rect);
        sfSprite_setPosition(
            st_tower[index].tower_sprt, st_tower[index].tower_pos);
    }
}

void window_struct(Win *st_win)
{
    st_win->mode = (sfVideoMode){1920, 1080, 32};
    st_win->wind = sfRenderWindow_create(
        st_win->mode, "SkyScan", sfClose, NULL);
    st_win->bg_sprt = sfSprite_create();
    st_win->bg_txt = sfTexture_createFromFile("assets/images/bg.png", NULL);
    sfSprite_setTexture(st_win->bg_sprt, st_win->bg_txt, sfFalse);
    st_win->bg_scale = (sfVector2f){1, 1};
    sfSprite_setScale(st_win->bg_sprt, st_win->bg_scale);
}

void call_structs(Win *st_win, Plane *st_plane,
    Tower *st_tower, Info *st_amounts)
{
    st_tower->tower_amount = st_amounts->amount_towers;
    st_plane->plane_amount = st_amounts->amount_planes;
    st_amounts->alive = st_plane->plane_amount;
    window_struct(st_win);
    info_struct(st_amounts);
    plane_struct(st_plane);
    tower_struct(st_tower);
}
