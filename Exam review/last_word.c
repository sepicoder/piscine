/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 15:41:27 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/26 16:16:01 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *str = argv[1];
	char *tmp;
	if (*str == '\0')
		return (0);
	while (*str)
	{
		while (*str == ' ' || *str == '\t')
			str++;
		if (*str != '\0')
			tmp = str;
		while (*str != ' ' && *str != '\t' && *str != '\0')
			str++;
	}
	while (*tmp && tmp != ' ' && tmp != '\t')
		write(1, tmp++, 1);
}
