/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grille_solution.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:45:28 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/24 00:04:47 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_colonne(int grille[GRID_SIZE][GRID_SIZE], int i, char *input)
{
	int	combienjenaivu;
	int	leplusgrand;
	int	j;

	combienjenaivu = 0;
	leplusgrand = 0;
	j = 0;
	while (j < GRID_SIZE)
	{
		if (grille[j][i] > leplusgrand)
		{
			combienjenaivu++;
			leplusgrand = grille[j][i];
		}
		j++;
	}
	if (combienjenaivu == (input[2 * i] - '0'))
		return (VRAI);
	else
		return (FAUX);
}

int	check_colonne_rev(int grille[GRID_SIZE][GRID_SIZE], int i, char *input)
{
	int	combienjenaivu;
	int	leplusgrand;
	int	j;

	combienjenaivu = 0;
	leplusgrand = 0;
	j = GRID_SIZE - 1;
	while (j >= 0)
	{
		if (grille[j][i] > leplusgrand)
		{
			combienjenaivu++;
			leplusgrand = grille[j][i];
		}
		j--;
	}
	if (combienjenaivu == (input[2 * i + 8] - '0'))
		return (VRAI);
	else
		return (FAUX);
}

int	check_ligne(int grille[GRID_SIZE][GRID_SIZE], int i, char *input)
{
	int	combienjenaivu;
	int	leplusgrand;
	int	j;

	combienjenaivu = 0;
	leplusgrand = 0;
	j = 0;
	while (j < GRID_SIZE)
	{
		if (grille[i][j] > leplusgrand)
		{
			combienjenaivu++;
			leplusgrand = grille[i][j];
		}
		j++;
	}
	if (combienjenaivu == (input[2 * i + 16] - '0'))
		return (VRAI);
	else
		return (FAUX);
}

int	check_ligne_rev(int grille[GRID_SIZE][GRID_SIZE], int i, char *input)
{
	int	combienjenaivu;
	int	leplusgrand;
	int	j;

	combienjenaivu = 0;
	leplusgrand = 0;
	j = GRID_SIZE - 1;
	while (j >= 0)
	{
		if (grille[i][j] > leplusgrand)
		{
			combienjenaivu++;
			leplusgrand = grille[i][j];
		}
		j--;
	}
	if (combienjenaivu == (input[2 * i + 24] - '0'))
		return (VRAI);
	else
		return (FAUX);
}

/*
**	FONCTION grille_solution()
**
**	Elle prend en parametre la grille et notre input,
**	et son role est de compter combien de " boites " on voit depuis
**	chaque ligne et depuis chaque colonne, dans les deux sens,
**	et si a un moment quelconque, on voit un nombre de boites qui ne correspond
**	pas au nombre qu'on voulait voir dans l'input, alors ca signifie que NON,
**	cette grille n'est pas la solution.
**	Et dans ce cas la fonction s'arrete et renvoit FAUX pour l'indiquer a la
**	fonction cherche()
**
**	Sinon, Si on a tout verifier et que tout concorde bien avec l'input,
**	cad si on a bien vu le bon nombre attendu sur toutes les lignes et toutes
**	les colonnes, dans les deux sens, alors ca signifie que nous avons bien
**	trouve la solution finale
**	Et dans ce cas la fonction s'arrete et renvoit VRAI pour l'indiquer a la
**	fonction cherche()
*/

int	grille_solution(int grille[GRID_SIZE][GRID_SIZE], char *input)
{
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		if (!check_colonne(grille, i, input)
			|| !check_colonne_rev(grille, i, input)
			|| !check_ligne(grille, i, input)
			|| !check_ligne_rev(grille, i, input))
			return (FAUX);
		i++;
	}
	return (VRAI);
}
