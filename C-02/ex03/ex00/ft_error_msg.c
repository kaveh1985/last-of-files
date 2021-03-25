/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:59:24 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/23 16:08:37 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

/*
**	La fonction ft_error_msg() est concue pour afficher un message d'erreur
**	adapte au code d'erreur que nous lui passons en parametres.
**
**	Par exemple, nous aurions pu decider que si le code d'erreur envoye est
**	IMPOSSIBLE, alors on aurait afficher le message:
**
**	"Error: Il n'y a aucune solution possible pour cette saisie de valeur\n"
**
**	Mais comme dans le sujet il est demande de n'afficher que "Error\n",
**	et ce pour tous les types d'erreurs que nous pouvons rencontrer,
**	nous affichons donc seulemt "Error\n", quel que soit le code d'erreur
*/

int	ft_error_msg(int codeerror)
{
	if (codeerror == WRONG_ARGC)
		ft_putendl("Error");
	if (codeerror == WRONG_ARGV)
		ft_putendl("Error");
	if (codeerror == IMPOSSIBLE)
		ft_putendl("Error");
	if (codeerror == ERROR)
		ft_putendl("Error");
	return (codeerror);
}
