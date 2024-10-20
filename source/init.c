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
	InitWindow(RES_X, RES_Y, "Project _one_");
	c->cursor_x = 0;
	c->cursor_y = 0;
	init_line_no(c);
	init_boxes(c);
	init_line(c);

}

none	init_line_no(t_program *c)
{
	int	ra;

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
	int row;
	int col;

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

none	init_line(t_program *c)
{
	c->line = malloc(sizeof(t_line));
	if (!c->line)
		ERROR_MEM(c);
	c->line->prev = NULL;
	c->line->next = create_new_page(c->line);
	c->line->index = 0;
	c->line->page = malloc(sizeof(char) * (4096 + 1));
	if (!c->line->page)
		ERROR_MEM(c);
	memset(c->line->page, 0, 4096 + 1);
}

	