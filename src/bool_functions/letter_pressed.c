/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** letter_pressed
*/

#include "lib.h"

bool s_pressed(Win *st_win)
{
    if (st_win->event.key.code == sfKeyS
        && st_win->event.type == sfEvtKeyPressed)
        return (true);
    if (st_win->event.key.code != sfKeyS
        && st_win->event.type == sfEvtKeyPressed)
        return (false);
    if (st_win->event.key.code == sfKeyS
        && st_win->event.type != sfEvtKeyPressed)
        return (false);
    if (st_win->event.key.code != sfKeyS
        && st_win->event.type != sfEvtKeyPressed)
        return (false);
}

bool n_pressed(Win *st_win)
{
    if (st_win->event.key.code == sfKeyN
        && st_win->event.type == sfEvtKeyPressed)
        return (true);
    if (st_win->event.key.code != sfKeyN
        && st_win->event.type == sfEvtKeyPressed)
        return (false);
    if (st_win->event.key.code == sfKeyN
        && st_win->event.type != sfEvtKeyPressed)
        return (false);
    if (st_win->event.key.code != sfKeyN
        && st_win->event.type != sfEvtKeyPressed)
        return (false);
}

bool l_pressed(Win *st_win)
{
    if (st_win->event.key.code == sfKeyL
        && st_win->event.type == sfEvtKeyPressed)
        return (true);
    if (st_win->event.key.code != sfKeyL
        && st_win->event.type == sfEvtKeyPressed)
        return (false);
    if (st_win->event.key.code == sfKeyL
        && st_win->event.type != sfEvtKeyPressed)
        return (false);
    if (st_win->event.key.code != sfKeyL
        && st_win->event.type != sfEvtKeyPressed)
        return (false);
}
