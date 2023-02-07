/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** if_plane_arrived
*/

#include "lib.h"

bool if_plane_arrived(float arrival_distance)
{
    if (arrival_distance <= 10)
        return (true);
    if (arrival_distance > 10)
        return (false);
}
