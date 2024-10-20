//____________________________________________________________________________________________________________________________//
//*__________________________________________________________________________________________________________________________*//
//**________________________________________________________________________________________________________________________**//
//***     File: /media/daniel/Stuff/Clones/Project_One/source/main.c                                                       ***//
//***     Header Created: Sun Oct 20 2024                                                                                  ***//
//***     Author: Daniel Haddington at <haddingtondaniel5@gmail.com>                                                       ***//
//***     Copyright (c) 2024 Daniel Haddington                                                                             ***//
//**________________________________________________________________________________________________________________________**//
//*__________________________________________________________________________________________________________________________*//

#include "../includes/program.h"


int main() {

	t_program *c;
	c = malloc(sizeof(t_program));
	if (!c)
	{
		printf("Memory Allocation Failed!\n");
		return 1;
	}
	init_(c);
	SetTargetFPS(24);
    // Main loop

	while (!WindowShouldClose())
	{	
		input_(c);
		BeginDrawing();
		draw__one_(c);
		EndDrawing();
	}

    // De-Initialization
    CloseWindow();
	cleanup(c);
    return 0;
}
