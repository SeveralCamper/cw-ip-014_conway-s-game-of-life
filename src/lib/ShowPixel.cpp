#include "ShowPixel.h"

void ShowPixel(RenderWindow& window, bool fieldArray[55][55])
{
    // window.clear(Color(0, 0, 0));

    for (int i = 0; i < 55; i++)
        for (int j = 0; j < 55; j++) {
            if (fieldArray[i][j] == 1) {
                RectangleShape rectangle(Vector2f(10.f, 10.f));
                rectangle.setFillColor(Color(255, 136, 0));
                rectangle.setOutlineThickness(.5f);
                rectangle.setOutlineColor(Color(255, 165, 0));
                rectangle.move(16 * i, 16 * j);
                window.draw(rectangle);
            }
        }
}