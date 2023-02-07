/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** Write your my.h header file that contains the
** prototypes of all the functions exposed by your libmy.a
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #include "lib.h"
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/Audio.h>
    #include <stdbool.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include <stdio.h>

    typedef struct l_sound {
        sfSound *sound;
        sfSoundBuffer *buffer;
    } s_sound;

    typedef struct l_Info {
        int alive;
        bool s_pressed;
        bool l_pressed;
        bool n_pressed;
        float sec_value;
        unsigned int time;
        unsigned int amount_towers;
        unsigned int amount_planes;
        sfFont *font;
        sfText *text;
        sfClock *clock;
    } Info;

    typedef struct l_Win {
        sfVideoMode mode;
        sfRenderWindow *wind;
        sfSprite *bg_sprt;
        sfTexture *bg_txt;
        sfEvent event;
        sfVector2f bg_scale;
    } Win;

    typedef struct l_Plane {
        int life;
        int plane_amount;
        float angle;
        float plane_vel;
        bool inside_tower;
        double plane_time;
        sfVector2f check_crash;
        sfVector2f position;
        sfVector2f plane_move;
        sfVector2f plane_finish;
        sfVector2f plane_scale;
        sfRectangleShape *plane_sprt;
        sfTexture *plane_txt;
        sfIntRect plane_rect;
    } Plane;

    typedef struct l_Tower {
        int tower_rad;
        int tower_amount;
        sfVector2f tower_pos;
        sfVector2f tower_scale;
        sfSprite *tower_sprt;
        sfTexture *tower_txt;
        sfIntRect tower_rect;
        sfCircleShape *circle;
        sfVector2f circle_scale;
        sfVector2f circle_pos;
    } Tower;

#endif
