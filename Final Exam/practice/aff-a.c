/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff-a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 17:12:51 by shomami           #+#    #+#             */
/*   Updated: 2018/02/01 17:29:08 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc,char **argv)
{
	int i;
	char *str;

	str = argv[1];
	i = 0;
	
	if (argc == 2)
	{
		while(*str)
		{
		if (*str == 'a')
		{
			ft_putchar(*str);
		}
		i++;
	}
	if (argc != 2)
	{
		ft_putchar('a');
	}
	ft_putchar('\n');
	return(0);
	}
}

