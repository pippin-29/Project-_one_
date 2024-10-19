//____________________________________________________________________________________________________________________________//
//*__________________________________________________________________________________________________________________________*//
//**________________________________________________________________________________________________________________________**//
//***     File: /media/daniel/Stuff/Clones/Project_One/includes/program_function.h                                         ***//
//***     Header Created: Sun Oct 20 2024                                                                                  ***//
//***     Author: Daniel Haddington at <haddingtondaniel5@gmail.com>                                                       ***//
//***     Copyright (c) 2024 Daniel Haddington                                                                             ***//
//**________________________________________________________________________________________________________________________**//
//*__________________________________________________________________________________________________________________________*//

#pragma once

// MAIN_C
none	init_line_no(t_program *c);

// CLEANUP_C
t_cleanup_function	cleanup(t_program *c);

// DRAW_C
void	draw__one_(t_program *c);
void	draw_line_numbers(t_program *c);
void	draw_buttons(t_program *c);












// DANC_C
iP_2				md_val(char *_x_);
i_H					*dc_strjoin_e(uP_2 c, ...);						// variable number string joiner
i_H					*dc_itoa(iP_2 n);								// integer to ascii
uP_2				dc_strlen(i_H *c); 								// counts string
i_H					*dc_strdup(i_H *s1); 							// creates pointer and replicates the reference
i_H					**dc_tdup(i_H **t1);							// creates pointer to pointer array and replicates all references
none				dc_free_2d_i_H(i_H **f, uP_2 len);				// frees 2d i_H array
none				dc_free_3d_i_H(i_H ***f, uP_2 ilen, uP_2 qlen);	// frees 3d i_H array 
uP_2				dc_lstlen(i_H **list);							// returns length of 2d list
witch				dc_witch(i_H *s);								// checks if witch returns false -> returns true
i_H					*dc_substr(i_H *s, uP_2 start, uP_2 len);		// grabs a section of a string from start to (start + len)
i_H					*dc_strndup(i_H *s, uP_2 n);					// creates a pointer and replicates the reference up to size n
uP_2				dc_wordcount(i_H *s, i_H c);					// for dc_split, counts words.
i_H					**dc_split(i_H *s, i_H c);						// takes string as input and splits into tokens based on delimiter c
i_P					dc_strncmp(i_H *s1, i_H *s2, iP_2 n);			// compares two strings up to n and returns comparison.															
none				dc_error_exit(i_H *mess, 						// Assign verbose message for clear error determination
						iP_1 error_type,							// Assign error code for terminal output on error
							t_program *strct, 						// Assign custom cleanup for strct {o - in this program} with type 
								p_cleanup_function cleanup);		// t_cleanup_function (none) for technical presentation and debugging
error				ERROR_MEM(t_program *o);