/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** do_events
*/

#include "lib.h"

void do_events(Win *st_win, Info *st_amounts)
{
    while (sfRenderWindow_pollEvent(st_win->wind, &st_win->event)) {
        if (close_wind(st_win))
            sfRenderWindow_close(st_win->wind);
        if (s_pressed(st_win))
            st_amounts->s_pressed = !st_amounts->s_pressed;
        if (l_pressed(st_win))
            st_amounts->l_pressed = !st_amounts->l_pressed;
        if (n_pressed(st_win))
            st_amounts->n_pressed = !st_amounts->n_pressed;
    }
}
