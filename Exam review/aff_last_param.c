/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:11:41 by shomami           #+#    #+#             */
/*   Updated: 2018/01/26 14:27:09 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i]) 
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int 	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putchar('\n');
	else
		ft_putstr(argv[argc-1]);
	return (0);
}
