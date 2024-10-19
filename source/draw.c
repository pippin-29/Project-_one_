//____________________________________________________________________________________________________________________________//
//*__________________________________________________________________________________________________________________________*//
//**________________________________________________________________________________________________________________________**//
//***     File: /media/daniel/Stuff/Clones/Project_One/source/draw.c                                                       ***//
//***     Header Created: Sun Oct 20 2024                                                                                  ***//
//***     Author: Daniel Haddington at <haddingtondaniel5@gmail.com>                                                       ***//
//***     Copyright (c) 2024 Daniel Haddington                                                                             ***//
//**________________________________________________________________________________________________________________________**//
//*__________________________________________________________________________________________________________________________*//

#include "../includes/program.h"
#include "../includes/raygui.h"



void	draw__one_(t_program *c)
{
	ClearBackground(CLITERAL(Color){126, 126, 196, 96});
	DrawText("Project _one_", 1024 / 2, 8, 24, CLITERAL(Color){0, 0, 196, 96});

	DrawRectangleRounded((Rectangle){0, 32, 944, 18 * 32}, 0.01f, 15, RAYWHITE);
	DrawText(TextFormat("Column: %3d", c->cursor_x), 0, md_val("P_19"), 16, CLITERAL(Color){0, 0, 196, 96});
	DrawText(TextFormat("Row: %3d", c->cursor_y), 0, md_val("_P20"), 16, CLITERAL(Color){0, 0, 196, 96});
	
	draw_line_numbers(c);
	draw_buttons(c);
	draw_boxes(c);
	
}

void	draw_line_numbers(t_program *c)
{
	Rectangle line_no_rect;

	line_no_rect.height = 18;
	line_no_rect.width = 48;
	line_no_rect.x = 0;
	line_no_rect.y = 32;

	int i;
	i = 0;
	while (i < 32)
	{
		GuiButton(line_no_rect, (char *)TextFormat("%4d", c->line_no[i]));
		line_no_rect.y += line_no_rect.height;
		i++;
	}
}

void	draw_buttons(t_program *c)
{
	if (GuiButton((Rectangle){0, 0, 75, 32}, "SAVEF"))
	{

	}
}

none draw_boxes(t_program *c)
{
	i_P row;
	i_P col;

	row = 0;
	while (row < GRID_ROWS)
	{
		col = 0;
		while (col < GRID_COLS)
		{
			DrawRectangleRounded(c->boxes[row][col], 0.0f, 5, CLITERAL(Color){0, 0, 0, 96});
			GuiDrawText("B", c->boxes[row][col], 1, BLACK);
			col++;
		}
		row++;
	}
}
