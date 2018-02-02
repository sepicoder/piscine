/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff-alpha2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 13:38:34 by shomami           #+#    #+#             */
/*   Updated: 2018/01/26 13:41:55 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if(a % 2 != 0)
			ft_putchar(a);
		else
			ft_putchar(a - 'a' + 'A');
		a++;
	}
	ft_putchar('\n');
}
