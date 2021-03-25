/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 16:41:21 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/23 16:38:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

/*
**	La fonction ft_check_argv() est ici pour nous indiquer si l'argument que
**	nous avons saisi est correct ou pas
**
**	Exemples:
**		"1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4"	-> correct
**		"coucou le monde"					-> incorrect /!\
**		"1234123412341234"					-> incorrect /!\
**		"1 1 1 1 1 1 1 1 1 1 1 1 5 5 5 5"	-> incorrect /!\
**		"4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4"	-> correct
**
**	Nous allons pour cela parcourir toute la chaine de caractere que nous avons
**	saisie, donc l'argument, et faire les verifications caractere par caractere
**
**	TantQue je ne suis pas la fin de ma chaine de caractere
**	|	Alors je verifie mon caractere actuel
**	|
**	|	Si le numero de la position (l'index) de mon caractere est pair
**	|	|	Je dois avoir un chiffre compris entre '1' et '4' inclus
**	|	|
**	|	|	Si mon caractere n'est ni un '1', ni un '2', ni un '3' ni un '4'
**	|	|	|	J'ai donc une erreur de saisie a cet endroit, donc je ne vais
**	|	|	|	pas plus loin, et je renvois qu'il y a une erreur.
**	|	|	FinSi
**	|	Sinon
**	|	|	Mon index est donc impair, donc ici, je dois avoir un espace
**	|	|
**	|	|	Si mon caractere n'est pas un espace
**	|	|	|	J'ai donc une erreur de saisie a cet endroit, donc je ne vais
**	|	|	|	pas plus loin, et je renvois qu'il y a une erreur.
**	|	|	FinSi
**	|	FinSi
**	|	Je passe au caractere suivant
**	FinTantQue
**
**	Maintenant que j'ai parcouru toute ma chaine de caractere,
**	je connais egalement sa longueur.
**
**	Or, je veux qu'il n'y ait QUE 16 chiffres, et 15 espaces
**	Donc, je veux que ma chaine de caractere soit de longueur 16 + 15 == 31
**	Pas plus
**	Pas moins
**	Donc, notre derniere verification :
**
**	Si ma chaine ne fait pas 31 caractere de long
**	|	J'ai donc une chaine soit trop longue, soit trop courte, et donc
**	|	je renvois qu'il y a une erreur.
**	FinSi
**
**	Si je suis arrive jusqu'ici sans trouver aucune erreur, alors j'ai termine,
**	je peux renvoyer SUCCESS pour indiquer que la saisie est correcte
*/

int	ft_check_argv(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 1)
		{
			if (str[i] != ' ')
				return (WRONG_ARGV);
		}
		else if (str[i] < '1' || str[i] > '4')
			return (WRONG_ARGV);
		i++;
	}
	if (i != 31)
		return (WRONG_ARGV);
	return (SUCCESS);
}
