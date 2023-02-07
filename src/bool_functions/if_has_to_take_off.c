/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** if_has_to_take_off
*/

#include "lib.h"

bool if_has_to_take_off(Plane *st_plane, Info *st_amounts, int index)
{
    if (st_plane[index].plane_time < st_amounts->sec_value)
        return (true);
    if (st_plane[index].plane_time > st_amounts->sec_value)
        return (false);
}
