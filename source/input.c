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
		add_char_to_page(c, key);
	}
	if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
	{
		c->mouse_position = GetMousePosition();
		c->cursor_x = (int)((c->mouse_position.x - OFFSET_X) / BOX_WIDTH);
		c->cursor_y = (int)((c->mouse_position.y - OFFSET_Y) / BOX_HEIGHT);
		if (c->cursor_x < 0) c->cursor_x = 0;
		if (c->cursor_x > 127) c->cursor_x = 127;
		if (c->cursor_y < 0) c->cursor_y = 0;
		if (c->cursor_y > 31) c->cursor_y = 31;
	}		
}
none reallocate_page(t_program *c)
{
	int i;
	int q;

	i = 0;
	while (i < GRID_ROWS)
	{
		int q = 0;
		c->page[i] = realloc(c->page[i], GRID_COLS + c->gap_size);
		while (q < GRID_COLS + c->gap_size)
		{
			if (!isprint(c->page[i][q]))
				c->page[i][q] = 0;
			q++;
		}
		i++;
	}
}
none add_char_to_page(t_program *c, int key)
{

	c->page[c->cursor_y][c->cursor_x] = key;
	
	c->cursor_x += 1;
	if (c->cursor_x > 127)
	{
		c->reacher += 1;
		c->cursor_x == 127;
	}
		
	if (c->reacher == c->gap_size - 1)
	{
		c->gap_size += c->gap_size;
		reallocate_page(c);
	}
		

}

