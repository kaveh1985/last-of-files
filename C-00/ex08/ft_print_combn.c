/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramzanz <mramzanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:18:09 by mramzanz          #+#    #+#             */
/*   Updated: 2021/03/21 10:01:48 by mramzanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_combn(int n)
{
	int a;
	int b;
	a = 0;
	while (a <= 8)
	{
		b = a + 1;
		while (b <= 9)
		{
			ft_putchar(a + 48);
			ft_putchar(a + 48);
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		a++;
	}
}
