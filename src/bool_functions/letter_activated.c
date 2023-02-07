/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** letter_activated
*/

#include "lib.h"

bool s_activated(Info *st_amounts)
{
    if (st_amounts->s_pressed == false)
        return (false);
    if (st_amounts->s_pressed == true)
        return (true);
}

bool n_activated(Info *st_amounts)
{
    if (st_amounts->n_pressed == false)
        return (false);
    if (st_amounts->n_pressed == true)
        return (true);
}

bool l_activated(Info *st_amounts)
{
    if (st_amounts->l_pressed == false)
        return (false);
    if (st_amounts->l_pressed == true)
        return (true);
}
