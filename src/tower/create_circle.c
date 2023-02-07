/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** create_circle
*/

#include "lib.h"

sfCircleShape *create_circle(sfVector2f pos, float radius)
{
    sfCircleShape *circle = sfCircleShape_create();

    sfCircleShape_setFillColor(circle, sfTransparent);
    sfCircleShape_setOutlineThickness(circle, 5);
    sfCircleShape_setOutlineColor(circle, sfBlack);
    sfCircleShape_setPosition(circle, pos);
    sfCircleShape_setRadius(circle, radius);
    return (circle);
}
