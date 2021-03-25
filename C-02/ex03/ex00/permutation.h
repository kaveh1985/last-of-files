/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutation.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 13:17:13 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/23 22:30:36 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERMUTATION_H
# define PERMUTATION_H
# include "rush01.h"

/*
**	Le tableau g_permut est le tableau dans lequel nous avons stocke
**	toutes les differentes permutations possibles avec 4 chiffres
*/

int const	g_permut[PERMUT_SIZE][GRID_SIZE] = {
	{1, 2, 3, 4},	/*	g_permut[0]		*/
	{1, 2, 4, 3},	/*	g_permut[1]		*/
	{1, 3, 2, 4},	/*	g_permut[2]		*/
	{1, 3, 4, 2},	/*	g_permut[3]		*/
	{1, 4, 2, 3},	/*	g_permut[4]		*/
	{1, 4, 3, 2},	/*	g_permut[5]		*/
	{2, 1, 3, 4},	/*	g_permut[6]		*/
	{2, 1, 4, 3},	/*	g_permut[7]		*/
	{2, 3, 1, 4},	/*	g_permut[8]		*/
	{2, 3, 4, 1},	/*	g_permut[9]		*/
	{2, 4, 1, 3},	/*	g_permut[10]	*/
	{2, 4, 3, 1},	/*	g_permut[11]	*/
	{3, 1, 2, 4},	/*	g_permut[12]	*/
	{3, 1, 4, 2},	/*	g_permut[13]	*/
	{3, 2, 1, 4},	/*	g_permut[14]	*/
	{3, 2, 4, 1},	/*	g_permut[15]	*/
	{3, 4, 1, 2},	/*	g_permut[16]	*/
	{3, 4, 2, 1},	/*	g_permut[17]	*/
	{4, 1, 2, 3},	/*	g_permut[18]	*/
	{4, 1, 3, 2},	/*	g_permut[19]	*/
	{4, 2, 1, 3},	/*	g_permut[20]	*/
	{4, 2, 3, 1},	/*	g_permut[21]	*/
	{4, 3, 1, 2},	/*	g_permut[22]	*/
	{4, 3, 2, 1}	/*	g_permut[23]	*/
};

/*
**	On a donc un tableau qui a 24 elements, 24 permutations
**
**	Pour la demonstration avec le tableau 'solution' dans lequel on
**	va stocker les index des dites permutations, imaginons que l'on commence
**	avec:
**		solution = {0, 0, 0, 0}
**
**	Ici, cela signifie qu'on va essayer la solution suivante:
**		g_permut[0]
**		g_permut[0]
**		g_permut[0]
**		g_permut[0]
**
**	Et si je developpe, ca equivaut a:
**		{1, 2, 3, 4}
**		{1, 2, 3, 4}
**		{1, 2, 3, 4}
**		{1, 2, 3, 4}
**
**	Et la, vous voyez plus facilement la grile non ? On a bien une premiere
**	proposition de remplissage, et vous avez vu que juste a partir des index
**	contenus dans solution, on est capable de recuperer tous les chiffres
**	a ecrire dans la grille
**
**	Un autre exemple pour etre certain de comprendre:
**		solution = {0, 15, 8, 23}
**
**	Ici, cela signifie qu'on va essayer la solution suivante:
**		g_permut[0]
**		g_permut[15]
**		g_permut[8]
**		g_permut[23]
**
**	Et si je developpe, ca equivaut a:
**		{1, 2, 3, 4}
**		{3, 2, 4, 1}
**		{2, 3, 1, 4}
**		{4, 3, 2, 1}
**
**	Eh voila ! On a une nouvelle proposition de remplissage de notre grille,
**	et ici aussi, nous avons pu recuperer tous les chiffres grace aux index
**	contenues dans le tableau 'solution' uniquement
*/

#endif
