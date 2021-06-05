#ifndef SHOW_PIXEL_H_
#define SHOW_PIXEL_H_

#include <SFML/Graphics.hpp>
#include <iostream>
#include <logic.h>

#include "Settings.h"

void ShowPixel(sf::RenderWindow& window, CellStatus fieldArray[ARR_WIDTH][ARR_HEIGHT]);

#endif
