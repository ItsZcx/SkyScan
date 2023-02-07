/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** sound
*/

#include "lib.h"

int destroy_sound(s_sound *st_sound)
{
    sfSound_destroy(st_sound->sound);
    sfSoundBuffer_destroy(st_sound->buffer);
    free(st_sound);
}

int sound_struct(s_sound *st_sound)
{
    st_sound->sound = sfSound_create();
    sfSound_getBuffer(st_sound->sound);
    st_sound->buffer = sfSoundBuffer_createFromFile(
        "assets/sounds/music.flac");
    sfSound_setBuffer(st_sound->sound, st_sound->buffer);
    sfSound_play(st_sound->sound);
    sfSound_setLoop(st_sound->sound, sfTrue);
}
