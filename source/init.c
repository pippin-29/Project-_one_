//____________________________________________________________________________________________________________________________//
//*__________________________________________________________________________________________________________________________*//
//**________________________________________________________________________________________________________________________**//
//***     File: /media/daniel/Stuff/Clones/Project_One/source/init.c                                                       ***//
//***     Header Created: Sun Oct 20 2024                                                                                  ***//
//***     Author: Daniel Haddington at <haddingtondaniel5@gmail.com>                                                       ***//
//***     Copyright (c) 2024 Daniel Haddington                                                                             ***//
//**________________________________________________________________________________________________________________________**//
//*__________________________________________________________________________________________________________________________*//

# include "../includes/program.h"


void init_(t_program *c)
{
	InitWindow(1024, 768, "Project_One");
	c->cursor_x = 1;
	c->cursor_y = 1;
	init_line_no(c);
	init_boxes(c);
}

none	init_line_no(t_program *c)
{
	i_P	ra;

	ra = _A;
	c->line_no = malloc(sizeof(int) * P_);
	if (!c->line_no)
		ERROR_MEM(c);
	while (ra < ENDSET)
	{
		c->line_no[ra - _A] = ra;
		ra++;
	}
}

none	init_boxes(t_program *c)
{
	i_P row;
	i_P col;

	row = 0;
	while (row < GRID_ROWS)
	{
		col = 0;
		while (col < GRID_COLS)
		{
			c->boxes[row][col] = (Rectangle){OFFSET_X + (col * BOX_WIDTH), OFFSET_Y + (row * BOX_HEIGHT), BOX_WIDTH, BOX_HEIGHT};
			col++;
		}
		row++;
	}
}