/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cherche.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 13:59:30 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/24 00:05:51 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

/*
**	FONCTION initsolution()
**
**	Elle initialise a 0 tous les elements du tableau 'solution'
*/
void	initsolution(int solution[GRID_SIZE])
{
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		solution[i] = 0;
		i++;
	}
}

/*
**	FONCTION permut_suivante()
**
**	La fonction permut_suivante est chargee de faire avancer les index
**	qui sont dans le tableau 'solution' pour ainsi tester la possibilite
**	de permutations suivante.
**
**	Pour illustrer, c'est elle qui fait que solution, qui vaut d'abord:
**		{0, 0, 0, 0}
**	Va ensuite devenir
**		 {0, 0, 0, 1}
**	puis {0, 0, 0, 2}
**	puis {0, 0, 0, 3}
**		etc...
**	puis {0, 0, 0, 23}
**	puis {0, 0, 1, 0}
**	puis {0, 0, 1, 1}
**		etc...
**	puis {0, 0, 23, 23}
**	puis {0, 1, 0, 0}
**		etc...
**	puis {23, 23, 23, 23}
**	ET C'EST FINI !
**
**	Une fois arrive a cette derniere possibilite, si ca n'a toujours pas resolu
**	la grille, permut_suivante() ne va pas augmenter solution d'avantage,
**	et va a la place quitter la fonction et renvoyer IMPOSSIBLE a la fonction
**	cherche() pour lui indiquer que tout a ete essayer, et que aucune solution
**	n'a ete trouvee
*/
int		permut_suivante(int solution[GRID_SIZE])
{
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		if (solution[i] == PERMUT_SIZE - 1)
		{
			solution[i] = 0;
			i++;
		}
		else
		{
			solution[i] = solution[i] + 1;
			return (SUCCESS);
		}
	}
	return (IMPOSSIBLE);
}

/*	
**	FONCTION cherche()
**
**	Nous declarons un nouveau tableau nomme 'solution'
**	Ce sera un tableau de 4 entiers
**	Ce tableau aura pour role de stocker les 4 numeros (les 4 index)
**	des permutations a mettre dans la grille pour essayer une nouvelle
**	eventuelle solution (d'ou le nom)
**
**	Pour bien comprendre, allez regarder dans le fichier permutation.h
**	J'y ai mis une demonstration pour aider a comprendre ce point
**
**	Dans un premier temps, on initialise 'solution' grace a la fonction
**	initsolution()
**	On a donc maintenant:	solution == {0, 0, 0, 0}
**
**	On peut donc commencer a essayer toutes les possibilites de permutations
**	jusqu'a soit trouver une solution valide et qui soit une vraie
**	solution, soit jusqu'a avoir essaye toutes les possibilites
**	sans n'en trouver aucune qui soit solution des inputs qu'on a saisi
**
**	TantQue	nous n'avons pas trouve la solution et que nous n'avons pas essayer
**	|		toutes les possibilites
**	|
**	|	On rempli la grille avec la solution actuelle, grace a la fonction
**	|	remplir_grille()
**	|
**	|	Si la grille, que nous venons de remplir, est valide,
**	|	|	cad si elle respecte les regles de base
**	|	|	(Pas de doublons par ligne et pas de doublons par colonnes)
**	|	|
**	|	|	A cet instant, nous savons que la grille en cours est valide
**	|	|	Il ne reste plus qu'a savoir si elle est aussi une solution
**	|	|	a l'input que nous avons saisi, cad si on voit le bon nombre
**	|	|	sur chaque ligne et sur chaque colonne. Donc prochaine etape :
**	|	|
**	|	|	Si la grille est une solution a l'input qu'on a saisi
**	|	|	|
**	|	|	|	C'est bon ! Ca veut dire qu'on a trouve la solution !
**	|	|	|	Donc on sort de la boucle (On sort du TantQue)
**	|	|	|
**	|	|	Sinon
**	|	|	|
**	|	|	|	On appelle la fonction permut_suivante() pour preparer la
**	|	|	|	prochaine possibilite a essayer, et on verifie au passage
**	|	|	|	si on vient d'essayer la derniere ou pas
**	|	|	|
**	|	|	|	Si c'etait effectivement la derniere, alors ca veut dire
**	|	|	|	qu'on a deja tout essayer et que rien ne permet de resoudre
**	|	|	|	notre grille, donc on quitte la fonction en renvoyant
**	|	|	|	IMPOSSIBLE a la fonction rush() pour lui indiquer que la
**	|	|	|	grille est irresolvable
**	|	|	|
**	|	|	FinSi
**	|	|
**	|	Sinon
**	|	|
**	|	|	On appelle la fonction permut_suivante() pour preparer la
**	|	|	prochaine possibilite a essayer, et on verifie au passage
**	|	|	si on vient d'essayer la derniere ou pas
**	|	|
**	|	|	Si c'etait effectivement la derniere, alors ca veut dire
**	|	|	qu'on a deja tout essayer et que rien ne permet de resoudre
**	|	|	notre grille, donc on quitte la fonction en renvoyant
**	|	|	IMPOSSIBLE a la fonction rush() pour lui indiquer que la
**	|	|	grille est irresolvable
**	|	|
**	|	FinSi
**	|
**	FinTantQue
**
**	On quitte la fonction et on renvoie SUCCESS pour indiquer a la fonction
**	rush() qu'on a trouve la solution et qu'elle peut afficher la grille
*/
int		cherche(int grille[GRID_SIZE][GRID_SIZE], char *input)
{
	int	solution[GRID_SIZE];
	int	continuer;

	continuer = 1;
	initsolution(solution);
	while (continuer)
	{
		remplir_grille(grille, solution);
		if (grille_valide(grille) == SUCCESS)
		{
			if (grille_solution(grille, input) == VRAI)
				continuer = 0;
			else
			{
				if (permut_suivante(solution) == IMPOSSIBLE)
					return (IMPOSSIBLE);
			}
		}
		else
		{
			if (permut_suivante(solution) == IMPOSSIBLE)
				return (IMPOSSIBLE);
		}
	}
	return (SUCCESS);
}
