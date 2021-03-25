/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 14:05:45 by ecirilo           #+#    #+#             */
/*   Updated: 2021/03/23 16:10:51 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**	La fonction ft_putendl() fait la meme chose que la fonction ft_putstr(),
**	a la seule difference que ft_putendl rajoute un '\n' automatiquement
**	a la fin de la chaine de caractere
*/

void	ft_putendl(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}
