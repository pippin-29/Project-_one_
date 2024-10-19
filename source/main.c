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

void init_(t_program *c)
{
	InitWindow(1024, 768, "Project_One");
	// c->camera.offset = (Vector2){0, 0};
	// c->camera.rotation = 0.0f;
	// c->camera.target = (Vector2){0, 0};
	// c->camera.zoom = 1.0f;
	init_line_no(c);
}

int main() {

	t_program *c;
	c = malloc(sizeof(t_program));
	if (!c)
	{
		printf("Memory Allocation Failed!\n");
		return 1;
	}
	init_(c);

    // Main loop

	while (!WindowShouldClose())
	{
		BeginDrawing();
		draw__one_(c);
		EndDrawing();
	}

    // De-Initialization
    CloseWindow();
	cleanup(c);
    return 0;
}
