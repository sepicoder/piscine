/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 22:42:56 by shomami           #+#    #+#             */
/*   Updated: 2018/01/29 22:51:04 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
   while (*s1 && *s2 && *s1 == *s2)
    {
      s1++;
      s2++;
    }
    if (*s1 != *s2)
	   	return (*s1 - *s2);
	return (0);
}

/* int		main(int argc, char **argv)
{
	printf("%d\n", ft_strcmp(argv[1],argv[2]));
	printf("%d", strcmp(argv[1],argv[2]));
	return (0);
} */
