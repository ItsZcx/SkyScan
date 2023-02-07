/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** close_wind
*/

#include "lib.h"

bool close_wind(Win *st_win)
{
    if (st_win->event.type == sfEvtClosed
        || st_win->event.key.code == sfKeyEscape)
        return (true);
    if (st_win->event.type != sfEvtClosed
        || st_win->event.key.code != sfKeyEscape)
        return (false);
}
