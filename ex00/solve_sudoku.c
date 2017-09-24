/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prazvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 15:01:34 by prazvan           #+#    #+#             */
/*   Updated: 2017/09/24 15:53:09 by prazvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	assign_all(int v[], int n, int value){}

void	next_cell(int x, int y, int *next_x, int *next_y){}

/*Comentariile de aici vor fi sterse*/
int		solve_sudoku(int sudoku[10][10], int x, int y)
{
	int possible_numbers[10];
	int i;
	int next_x;
	int next_y;
	
	/*Cat timp exista deja o valoare in patratelul curent, atunci treci la urmatorul, daca nu ai ajuns la ultimul*/	
	while(sudoku[x][y] && (x != 9 || y != 9))
	{
		next_cell(x, y,  &next_x, &next_y);
		x = next_x;
		y = next_y;
	}
	assign_all(possible_numbers, 10, 1);
	check_line(sudoku, possible_numbers, x);
	check_column(sudoku, possible_numbers, y);
	check_square(sudoku, possible_numbers, x, y);
	i = 1;
	while (i <= 9)
	{
		if(possible_numbers[i])
		{
			sudoku[x][y] = i;
			/*Inca nu am rezolvat conditia de oprire*/
			next_cell(x, y, &next_x, &next_y);
			solve_sudoku(sudoku, next_x, next_y);
			sudoku[x][y] = 0;
		}
		i++;
	}
}
