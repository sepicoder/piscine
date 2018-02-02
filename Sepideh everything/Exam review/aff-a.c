/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff-a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 11:26:11 by shomami           #+#    #+#             */
/*   Updated: 2018/01/19 12:14:51 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_aff_a(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
		}
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc,char **argv)
{
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	ft_aff_a(argv[1]);
}
