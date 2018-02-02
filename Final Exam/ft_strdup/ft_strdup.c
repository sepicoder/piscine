/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 00:22:18 by shomami           #+#    #+#             */
/*   Updated: 2018/01/30 00:36:50 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char    *ft_strdup(char *src)
{
  char *dest;
  char *begin;

  dest = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
  begin = dest;
  while (*src)
  {
	*dest = *src;
    dest++;
 	src++;
  }
  *dest = '\0';
  return (begin);
}

int   main(int argc, char **argv)
{
  char *a = argv[1];
  char *b = ft_strdup(a);


  printf("%s\n", b);
  return (0);
}
