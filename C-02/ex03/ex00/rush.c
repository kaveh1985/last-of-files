/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:30:46 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/23 22:02:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

/*
**	Dans la fonction rush(),
**	On commence par creer notre grille de 4x4 cases,
**	donc un tableau d'entier, a deux dimensions
**
**	Ensuite, nous allons appeler la fonction chercher(),
**	en lui donnant la grille qu'on a cree, et notre input
**
**	La fonction cherche() est la pour essayer toutes les permutations
**	possibles pour chacune des 4 lignes de la grille, et si elle tombe sur
**	une solution a notre input, elle l'ecrit dans la grille et elle nous
**	renvoit SUCCESS
**	Sinon, si la fonction cherche() a essayer toutes les possibilites
**	et n'a trouve aucune solution, c'est que l'input que nous avons saisi
**	n'est pas resolvable, et dans ce cas, cherche() nous renverra IMPOSSIBLE
**
**	Ainsi, on appelle la fonction cherche(), donc on l'execute pour trouver
**	la solution si il y en a  une, et on verifie si elle nous a renvoye
**	SUCCESS ou pas
**
**	Si cherche() nous renvoit SUCCESS
**	|	On affiche notre grille qui a ete au prealable remplie avec la solution
**	|
**	|	On quitte la fonction rush en renvoyant SUCCESS pour indiquer au main()
**	|	que tout s'est bien passé et qu'on a trouve une solution,
**	|	et qu'on l'a bien affiche
**	Sinon
**	|	Ca veut dire qu'on n'a trouve aucune solution, donc on n'affiche pas la
**	|	grille, et on quitte la fonction en renvoyant ERROR
**	|	pour indiquer au main() que ce n'est pas resolvable
**	FinSi
*/

int	rush(char *input)
{
	int	grille[GRID_SIZE][GRID_SIZE];

	if (cherche(grille, input) == SUCCESS)
	{
		afficher_grille(grille);
		return (SUCCESS);
	}
	else
	{
		return (ERROR);
	}
}
