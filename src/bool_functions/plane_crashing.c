/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** plane_crashing
*/

#include "lib.h"

bool planes_crashing(float plane_distance)
{
    if (plane_distance < 25)
        return (true);
    if (plane_distance > 25)
        return (false);
}
