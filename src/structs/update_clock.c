/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** update_clock
*/

#include "lib.h"

void update_clock(Info *st_amounts)
{
    st_amounts->time = sfTime_asMilliseconds(
        sfClock_getElapsedTime(st_amounts->clock));

    if (st_amounts->time >= 100) {
        sfText_setString(st_amounts->text, my_get_str(st_amounts->sec_value));
        st_amounts->sec_value += 0.1;
        sfClock_restart(st_amounts->clock);
    }
}
