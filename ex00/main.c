/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prazvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 13:36:42 by prazvan           #+#    #+#             */
/*   Updated: 2017/09/24 15:44:34 by prazvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		main(int argc, char **argv)
{
	int sudoku[10][10];

	convert_input(argc, argv, sudoku);
	solve_sudoku(sudoku, 1, 1);
	print_sudoku(sudoku);
}
