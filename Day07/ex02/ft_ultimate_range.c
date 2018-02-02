/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:37:58 by shomami           #+#    #+#             */
/*   Updated: 2018/01/18 19:53:41 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *diff;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = malloc(sizeof(*diff) * (max - min));
	i = 0;
	while (min < max)
		*(diff + i++) = min++;
	*range = diff;
	return (i);
}
