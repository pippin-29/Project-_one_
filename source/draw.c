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

void	draw__one_(t_program *c)
{
	ClearBackground(CLITERAL(Color){126, 126, 196, 96});
	DrawText("Project _one_", 1024 / 2, 8, 24, CLITERAL(Color){0, 0, 196, 96});
	DrawRectangleRounded((Rectangle){1000, 32, 24, 18 * 32}, 0.05f, 15, BLACK);
	DrawRectangleRounded((Rectangle){0, 32, 1000, 18 * 32}, 0.01f, 15, RAYWHITE);
	
	
	draw_line_numbers(c);
	draw_buttons(c);

}

void	draw_line_numbers(t_program *c)
{
	Rectangle line_no_rect;

	line_no_rect.height = 18;
	line_no_rect.width = 48;
	line_no_rect.x = 8;
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

// void	draw_column_cursor_location(t_program *c)
// {

// }

// void	draw_row_cursor_location(t_program *c)
// {
	
// }

void	draw_buttons(t_program *c)
{
	if (GuiButton((Rectangle){1024 - 75, md_val("P_19"), 75, 32}, "NPAGE"))
	{

	}
	if (GuiButton((Rectangle){1024 - 75, md_val("P_20"), 75, 32}, "PPAGE"))
	{

	}
	if (GuiButton((Rectangle){1024 - 75, md_val("P_21"), 75, 32}, "NVERS"))
	{

	}
	if (GuiButton((Rectangle){1024 - 75, md_val("P_22"), 75, 32}, "PVERS"))
	{

	}
	if (GuiButton((Rectangle){1024 - 75, md_val("P_23"), 75, 32}, "SAVEF"))
	{

	}

}
