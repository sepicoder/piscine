/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:48:32 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/26 15:36:07 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar1(char c, char *s1, int index)
{
	int i;
	
	i = 0;
	while(i < index)
		if (c == *(s1 + i++))
			return ;
	write(1, &c, 1);
}

void	printchar2(char c, char *s1, char *s2, int index)
{
	int i;

	i = 0;
	while(i < index)
		if (c == *(s2 + i++))
			return ;
	while (*s1)
		if (c == *s1++)
			return ;
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char *tmp;
	int index;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	tmp = argv[1];
	index = 0;
	while(*tmp)
		printchar1(*tmp++, argv[1], index++);
	tmp = argv[2];
	index = 0;
	while (*tmp)
		printchar2(*tmp++, argv[1], argv[2], index++);
	return (0);
}
