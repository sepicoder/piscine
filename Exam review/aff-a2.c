/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff-a2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 13:44:10 by shomami           #+#    #+#             */
/*   Updated: 2018/01/26 13:50:48 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char *str = argv[1];

	if (argc == 2)
		while(*str)
		{
			if(*str == 'a')
				write(1, str, 1);
			str++;
		}
	write(1, "\n", 1);
}
