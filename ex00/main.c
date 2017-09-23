/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prazvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 13:36:42 by prazvan           #+#    #+#             */
/*   Updated: 2017/09/23 14:59:58 by prazvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data_structures.h"

int		main(int argc, char **argv)
{
	t_cell sudoku[10][10];

	convert_input(argc, argv, sudoku);
	solve_sudoku(sudoku);
	print_sudoku(sudoku);
}
