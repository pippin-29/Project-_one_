//____________________________________________________________________________________________________________________________//
//*__________________________________________________________________________________________________________________________*//
//**________________________________________________________________________________________________________________________**//
//***     File: /media/daniel/Stuff/Clones/Project_One/source/input.c                                                      ***//
//***     Header Created: Sun Oct 20 2024                                                                                  ***//
//***     Author: Daniel Haddington at <haddingtondaniel5@gmail.com>                                                       ***//
//***     Copyright (c) 2024 Daniel Haddington                                                                             ***//
//**________________________________________________________________________________________________________________________**//
//*__________________________________________________________________________________________________________________________*//

#include "../includes/program.h"

none	input_(t_program *c)
{
	if ((IsKeyPressed(KEY_LEFT) || IsKeyPressedRepeat(KEY_LEFT))&& c->cursor_x > 0)
		c->cursor_x -= 1;
    if ((IsKeyPressed(KEY_RIGHT) || IsKeyPressedRepeat(KEY_RIGHT)) && c->cursor_x < 127)
		c->cursor_x += 1;  
    if ((IsKeyPressed(KEY_UP) || IsKeyPressedRepeat(KEY_UP)) && c->cursor_y > 0)
        c->cursor_y -= 1;
    if ((IsKeyPressed(KEY_DOWN) || IsKeyPressedRepeat(KEY_DOWN)) && c->cursor_y < 31)
        c->cursor_y += 1;
	int key = GetCharPressed();
	if(isprint(key))
	{
		printf("Printable Character: %c\n", key);
	}
	if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
	{
		c->mouse_position = GetMousePosition();

		printf(" mouse_x: %f  mouse_y: %f\n", c->mouse_position.x, c->mouse_position.y);
		c->cursor_x = (int)((c->mouse_position.x - OFFSET_X) / BOX_WIDTH);
		c->cursor_y = (int)((c->mouse_position.y - OFFSET_Y) / BOX_HEIGHT);
		printf(" cursor_x: %d  cursor_y: %d\n", c->cursor_x, c->cursor_y);
		if (c->cursor_x < 0) c->cursor_x = 0;
		if (c->cursor_x > 127) c->cursor_x = 127;
		if (c->cursor_y < 0) c->cursor_y = 0;
		if (c->cursor_y > 31) c->cursor_y = 31;
	}		
}