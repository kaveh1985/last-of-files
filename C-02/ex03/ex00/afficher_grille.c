/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   afficher_grille.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:47:49 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/23 23:32:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

/*
**	FONCTION afficher_grille()
**
**	On parcours toutes les lignes de la grilles
**	On parcours toutes les colonnes de chaque ligne de la grille,
**	et ainsi on parcours toutes les cases de la grilles
**
**	On affiche le contenu de la case, et on continue ainsi jusqu'a avoir
**	afficher toute la grille
*/
void	afficher_grille(int grille[GRID_SIZE][GRID_SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < GRID_SIZE)
	{
		j = 0;
		while (j < GRID_SIZE)
		{
			ft_putnbr(grille[i][j]);
			j++;
			if (j != GRID_SIZE)
				write(1, " ", 1);
		}
		i++;
		write(1, "\n", 1);
	}
}
