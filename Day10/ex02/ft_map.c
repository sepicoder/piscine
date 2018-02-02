/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 20:02:18 by shomami           #+#    #+#             */
/*   Updated: 2018/01/22 21:19:45 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *output;
	int i;

	i = 0;
	output = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		output[i] = f(tab[i]);
		i++;
	}
	return (output);
}
