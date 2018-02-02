/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:48:32 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/26 15:39:06 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c, char *s1, char *s2, int index)
{
	int i;
	
	i = 0;
	while(i < index)
		if (c == *(s1 + i++))
			return ;
	while (*s2)
		if (c == *s2++)
		{
			write(1, &c, 1);
			return ;
		}
}

int		main(int argc, char **argv)
{
	char *tmp;
	int index;

	if (argc != 3)
		write(1, "\n", 1);
	tmp = argv[1];
	index = 0;
	while(*tmp)
		printchar(*tmp++, argv[1], argv[2], index++);
	return (0);
}
