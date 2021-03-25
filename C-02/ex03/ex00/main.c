/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:47:58 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/23 16:04:07 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rush01.h"

/*
**	On cree une variable int 'retour' qui va servir a recuperer le code
**	de retour de la fonction rush() plus tard
**	(Par exemple, si la fonction rush() renvoit SUCCESS, c'est un code
**	de retour qui indique que tout s'est bien passe)
**
**	Dans un premier temps, on verifie qu'on a saisi un et un seul argument
**	apres le "./rush-01"
**
**	Exemples :
**		./rush-01 -> argc == 1 -> Pas assez d'arguments -> Erreur
**
**		./rush-01 Coucou le monde -> argc == 4 -> Trop d'arguments -> Erreur
**
**		./rush-01 "Coucou le monde" -> argc == 2 -> C'est bon !
**
**		./rush-01 "1 2 3 4 4 3 2 1 1 2 3 4 4 3 2 1" -> argc == 2 -> C'est bon !
**
**	Si on a pas le bon nombre d'argument
**	|	la fonction ft_error_msg nous affiche le message : "Error\n"
**	|	puis le programme se termine
**	Sinon
**	|	On sait qu'on a le bon nombre d'arguments, maintenant, on va
**	|	verifier qu'on a saisi un argument correct, grace a la fonction
**	|	ft_check_argv()
**	|
**	|	Si la fonction nous dit que la saisie est incorrect
**	|	|	la fonction ft_error_msg nous affiche le message : "Error\n"
**	|	|	puis le programme se termine
**	|	Sinon
**	|	|	On sait maintenant que nous avons le bon nombre d'arguments,
**	|	|	et que la saisie est correcte, on va donc pouvoir executer notre
**	|	|	fonction rush()
**	|	|	On recupere le code de retour de la fonction rush dans la variable
**	|	|	'retour', comme explique precedemment, et grace a ce code de retour,
**	|	|	on va verifier si tout s'est bien passe
**	|	|
**	|	|	Si le code de retour vaut SUCCESS
**	|	|	|	tout s'est bien passe, nous pouvons quitter le programme
**	|	|	|	proprement
**	|	|	Sinon
**	|	|	|	ca veut dire qu'on a eu une erreur pendant l'execution
**	|	|	|	de la fonction rush(), donc on appelle ft_error_msg()
**	|	|	|	pour afficher le message : "Error\n"
**	|	|	|	puis quitter le programme
**	|	|	FinSi
**	|	FinSi
**	FinSi
*/

int	main(int argc, char **argv)
{
	int	retour;

	if (argc != 2)
		return (ft_error_msg(WRONG_ARGC));
	if (ft_check_argv(argv[1]))
		return (ft_error_msg(WRONG_ARGV));
	retour = rush(argv[1]);
	if (retour != SUCCESS)
		return (ft_error_msg(retour));
	return (SUCCESS);
}
