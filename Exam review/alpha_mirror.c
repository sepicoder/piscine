/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 14:16:27 by shomami           #+#    #+#             */
/*   Updated: 2018/01/29 14:52:38 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char *str;

	str = argv[1];
	while (*str && argc >= 1)
	{
		if ( *str >= 'a' && *str <= 'z')
		{
			*str = 'z'- *str +'a';
			ft_putchar(*str);
		}
		else if ( *str >= 'A' && *str <= 'Z')
		{
			*str = 'Z' - *str + 'A';
			ft_putchar(*str);
		}
		str++;
	}
	ft_putchar('\n');
	return (0);
}
