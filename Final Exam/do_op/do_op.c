/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:07:29 by shomami           #+#    #+#             */
/*   Updated: 2018/01/29 16:53:46 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void do_op(char **argv)
{
	char str;

	str = argv[2][0];
	if (str == '+')
		printf("%d", (atoi(argv[1]) + atoi(argv[3])));
	if (str == '-')
		printf("%d", (atoi(argv[1]) - atoi(argv[3])));
	if (str == '*')
		printf("%d", (atoi(argv[1]) * atoi(argv[3])));
	if (str == '/')
		printf("%d", (atoi(argv[1]) / atoi(argv[3])));
	if (str == '%')
		printf("%d", (atoi(argv[1]) % atoi(argv[3])));
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		do_op(argv);
	}
	printf("\n");
}
