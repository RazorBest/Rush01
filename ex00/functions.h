/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prazvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 14:46:16 by prazvan           #+#    #+#             */
/*   Updated: 2017/09/24 15:33:57 by prazvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H

#define FUNCTIONS_H

/*Comentariile astea vor fi sterse deoarece nu le vrea norminette-ul*/

/*Formeaza matricea in funtie de argumentele pe care le primeste functia*/
void	convert_input(int argc, char **argv, int sudoku[10][10]);
/*Functia de baza care va rezolva sudoku*/
void	solve_sudoku(int sudoku[10][10], int x, int y);
/*Se uita ce numere sunt deja pe linia lin si atribuie valoarea 0 in vectorul possible_numbers[] numerelor pe care le gaseste*/
int		check_line(int sudoku[10][10], int possible_numbers[10], int lin);
/*Aici se uita pe coloana*/
int		check_column(int sudoku[10][10], int possible_numbers[10], int col);
/*Iar aici se uita in patratul in care se afla elementul de pe linia lin si coloana col*/
int		check_square(int sudoku[10][10], int possible_numbers[10], int lin, int col);
/*Afiseaza valorile matricei ca in exemplu*/
void	print_sudoku(int sudoku[10][10]);

#endif
