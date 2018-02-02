/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 16:56:52 by shomami           #+#    #+#             */
/*   Updated: 2018/01/29 21:52:25 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while (*str == '\n' || *str == '\v' || *str == '\t' ||
			   	*str == '\f' || *str == '\r' || *str == ' ')
		{
			printf("*str is %c\n", *str); 
			str++;
		}
		if (*str == '-')
			sign = -1;
		if (*str == '+' || *str == '-')
			str++;
		while (*str >= '0' && *str <= '9')
		{
			num = (num * 10) + (*str - '0');
			str++;
}
	return (sign * num);
}

int		main(int argc, char **argv)
{
	printf("%d\n", atoi(argv[1]));
	printf("%d", ft_atoi(argv[1]));
			return (0);
}
