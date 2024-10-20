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

typedef struct s_rope_node
{
	i_H					*substring;
	iP_1				length;
	struct s_rope_node	*left;
	struct s_rope_node	*right;
} t_rope_node;

typedef struct s_rope
{
	t_rope_node	*root;
	iP_1		total_length;
} t_rope;

typedef struct s_program
{	
	iP_1		in;
	i_P 		*line_no;
	i_P			cursor_x;
	i_P			cursor_y;
	Rectangle 	boxes[GRID_ROWS][GRID_COLS];

} t_program;


typedef	void		(*p_cleanup_function)(t_program *);

