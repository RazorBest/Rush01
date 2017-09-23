/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prazvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 15:01:34 by prazvan           #+#    #+#             */
/*   Updated: 2017/09/23 15:20:35 by prazvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "data_structures.h"

void	solve_sudoku(t_cell sudoku[10][10])
{
	int i;
	int j;
	int value;

	i = 1;
	while ()
	{
		while (i < 9)
		{
			while(j < 8) 
			{
				search_line(a[10][10], i);
				search_column(a[10][10], j);
				search_square(a[10][10], i, j);
				value = verify_line(a[10][10], i);
				if (value)
				{
					a[i][j].value = value;
					continue ;
				}
				value = verify_column(a[10][10], j);
				if (value)
				{
					a[i][j].value = value;
					continue ;
				}
				value = verify_square(a[10][10], i, j);
				if (value)
				{
					a[i][j].value = value;
					continue ;
				}
				value = verify_cell(a[10][10], i, j);
				if (value)
				{
					a[i][j].value = value;
					continue ;
				}
				j++;
			}
			i++;
		}
	}
}
