/*
** EPITECH PROJECT, 2023
** my_cursor.c
** File description:
** my_cursor.c
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System/Vector2.h>
#include "struct.h"

void my_cursor(game_t game)
{
    int x = 60;
    int y = 60;
    sfVector2f positionSpr;

    positionSpr.x = sfMouse_getPositionRenderWindow(game.w).x - x;
    positionSpr.y = sfMouse_getPositionRenderWindow(game.w).y - y;
    sfSprite_setPosition(game.cursorSpr, positionSpr);
    sfRenderWindow_drawSprite(game.w, game.cursorSpr, NULL);
}
