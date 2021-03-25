/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 14:14:20 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/21 20:54:34 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

# define GRID_SIZE 4
# define PERMUT_SIZE 24
# define VRAI 1
# define FAUX 0

enum	e_returncode
{
	SUCCESS,
	WRONG_ARGC,
	WRONG_ARGV,
	NOT_VALID,
	IMPOSSIBLE,
	ERROR
};

int		grille_solution(int grille[GRID_SIZE][GRID_SIZE], char *input);
int		grille_valide(int grille[GRID_SIZE][GRID_SIZE]);
int		cherche(int grille[GRID_SIZE][GRID_SIZE], char *input);
int		ft_check_argv(char *str);
void	ft_putnbr(int nb);
void	remplir_grille(int grille[GRID_SIZE][GRID_SIZE],
			int solution[GRID_SIZE]);
void	afficher_grille(int grille[GRID_SIZE][GRID_SIZE]);
int		rush(char *input);
int		ft_error_msg(int codeerror);
void	ft_putendl(char *str);

#endif
