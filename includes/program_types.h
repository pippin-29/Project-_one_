//____________________________________________________________________________________________________________________________//
//*__________________________________________________________________________________________________________________________*//
//**________________________________________________________________________________________________________________________**//
//***     File: /media/daniel/Stuff/Clones/Project_One/includes/program_types.h                                            ***//
//***     Header Created: Sun Oct 20 2024                                                                                  ***//
//***     Author: Daniel Haddington at <haddingtondaniel5@gmail.com>                                                       ***//
//***     Copyright (c) 2024 Daniel Haddington                                                                             ***//
//**________________________________________________________________________________________________________________________**//
//*__________________________________________________________________________________________________________________________*//

#pragma once

typedef unsigned char			u_H;
typedef unsigned short			u_P;
typedef unsigned int			uP_1;
typedef unsigned long			uP_2;

typedef char					i_H;
typedef short					i_P;
typedef int						iP_1;
typedef long					iP_2;

typedef	void					t_cleanup_function;
typedef	void					error;
typedef void					none;
typedef bool					witch;

typedef struct s_program
{	
	int			in;
	int 		*line_no;
	Vector2		mouse_position;
	int			cursor_x;
	int			cursor_y;
	Rectangle 	boxes[GRID_ROWS][GRID_COLS];
	char		*line;

} t_program;


typedef	void		(*p_cleanup_function)(t_program *);

