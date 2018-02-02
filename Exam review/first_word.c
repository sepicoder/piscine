/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 15:41:27 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/26 16:10:38 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int   main(int argc, char **argv)
{
	if(argc == 2)
	{
		while (*str == ' ' || *str == '\t')
		   str++;
		while (*str && *str != ' ' && *str != '\t')
		   write(1, str++, 1);
	}
	write(1, "\n", 1)
	return (0);
}
