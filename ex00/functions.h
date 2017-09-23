/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prazvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 14:46:16 by prazvan           #+#    #+#             */
/*   Updated: 2017/09/23 15:16:39 by prazvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H

#define FUNCTIONS_H

t_cell	*convert_input(int argc, char **argv);
void	solve_sudoku(t_cell sudoku[10][10]);
void	search_line(t_cell sudoku[10][10], int x, int y);
void	search_column(t_cell sudoku[10][10], int x, int y);
void	search_square(t_cell sudoku[10][10], int x, int y);
int		verify_line(t_cell sudoku[10][10], int lin);
int		verify_column(t_cell sudoku[10][10], int col);
int		verify_square(t_cell sudoku[10][10], int sq);
int		veriy_cell(t_cell cell);
void	print_sudoku(t_cell sudoku[10][10]);

#endif
