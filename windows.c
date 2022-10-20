/*
** EPITECH PROJECT, 2022
** SFM Window
** File description:
** EPITECH Day 13 Task01 project
*/

#include <SFML/Graphics.h>

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {800, 600, 32};
    sfEvent event;

    window = sfRenderWindow_create(video_mode, "My first window",
    sfResize | sfClose, NULL);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_display(window);
    }
}
