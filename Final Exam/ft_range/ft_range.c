/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 23:50:53 by shomami           #+#    #+#             */
/*   Updated: 2018/01/31 23:50:56 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
  int *str;
  int i;

  i = 0;

  if (start >= end)
      str = (int*)malloc(sizeof(int) * (start - end));
    else
      str = (int*)malloc(sizeof(int) * (end - start));
  while (start != end)
  {
    str[i] = start;
    i++;
    if(start > end)
      start--;
    else
      start++;
  }
  str[i] = start;
  return (str);
}

int main(void)
{
  int* res;
  int i;

  res = ft_range(3, 3);

  for (i = 0; i < 1; i++)
    printf("%d,", res[i]);
    printf("\n");
}
