//____________________________________________________________________________________________________________________________//
//*__________________________________________________________________________________________________________________________*//
//**________________________________________________________________________________________________________________________**//
//***     File: /media/daniel/Stuff/Clones/Project_One/source/line.c                                                       ***//
//***     Header Created: Sun Oct 20 2024                                                                                  ***//
//***     Author: Daniel Haddington at <haddingtondaniel5@gmail.com>                                                       ***//
//***     Copyright (c) 2024 Daniel Haddington                                                                             ***//
//**________________________________________________________________________________________________________________________**//
//*__________________________________________________________________________________________________________________________*//

#include "../includes/program.h"

t_line	*create_new_page(t_line *line)
{
	line->next = malloc(sizeof(t_line));
	if (!line->next)
	{
		printf("No More Memory! Ahahahahahaha HA\n");
		return (NULL);
	}
	line->next->index = line->index + 1;
	line->next->page = malloc(sizeof(char) * (4096 + 1));
	if (!line->next->page)
	{
		printf("No More Memory! Ahahahahahaha HA\n");
		return (NULL);
	}
	memset(line->next->page, 0, 4096 + 1);
	line->next->next = NULL;
}
