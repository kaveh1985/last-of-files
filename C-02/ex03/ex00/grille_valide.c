/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grille_valide.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:12:28 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/23 23:52:54 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	colonne_valide(int grille[GRID_SIZE][GRID_SIZE], int i)
{
	int	j;
	int	k;

	j = 0;
	while (j < GRID_SIZE)
	{
		k = 0;
		while (k < GRID_SIZE)
		{
			if (j != k)
				if (grille[k][i] == grille[j][i])
					return (FAUX);
			k++;
		}
		j++;
	}
	return (VRAI);
}

/*
**	FONCTION grille_valide()
**
**	Elle verifie si une grille est valide, cad si deja elle respecte les regles
**	du jeu.
**	Donc dans notre cas, pour qu'une grille soit valide, il faut qu'il n'y
**	ait pas de doublons par ligne, ni par colonne
**
**	Or comme on remplit nos grilles avec les permutations du tableau g_permut,
**	on ne peut donc dors et deja pas avoir de doublons sur nos lignes
**
**	Il ne reste donc qu'a verifier qu'il n'y a pas de doublons dans les quatres
**	colonnes
**	Donc on parcours nos 4 colonnes, et pour chacune,
**	on la verifie avec la fonction colonne_valide()
*/
int	grille_valide(int grille[GRID_SIZE][GRID_SIZE])
{
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		if (!(colonne_valide(grille, i)))
			return (NOT_VALID);
		i++;
	}
	return (SUCCESS);
}
