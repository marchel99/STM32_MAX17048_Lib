#pragma once

#include "lcd.h"
#include "bitmap.h"

#define DISPLAY_WIDTH 	(LCD_WIDTH)
#define DISPLAY_HEIGHT 	(LCD_HEIGHT)
#define DISPLAY_DEPTH 	16

typedef uint16_t color_t;

#define hagl_hal_put_pixel lcd_put_pixel
