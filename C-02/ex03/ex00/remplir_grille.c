/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplir_grille.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:11:13 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/23 23:44:09 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include "permutation.h"

/*
**	FONCTION remplir_grille()
**
**	C'est elle qui est chargee de recuperer les permutations completes,
**	dans le tableau g_permut (dans le fichier permutation.h) grace aux index
**	que nous avons mis dans le tableau 'solution',
**	et ensuite de mettre ces chiffres dans la grille, ligne par ligne,
**	et case par case.
**
**	Pour illustrer, c'est cette fonction qui va etre capable de faire:
**
**		solution == {0, 23, 2, 1}
**
**	recuperation des elements de g_permut en question:
**
**		g_permut[0]		->	{1, 2, 3, 4}
**		g_permut[23]	->	{4, 3, 2, 1}
**		g_permut[2]		->	{1, 3, 2, 4}
**		g_permut[1]		->	{1, 2, 4, 3}
**
**	et enfin, on remplit la grille
**	avec les permutations qu'on vient de recuperer
*/
void	remplir_grille(int grille[GRID_SIZE][GRID_SIZE],
						int solution[GRID_SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < GRID_SIZE)
	{
		j = 0;
		while (j < GRID_SIZE)
		{
			grille[i][j] = g_permut[solution[i]][j];
			j++;
		}
		i++;
	}
}
