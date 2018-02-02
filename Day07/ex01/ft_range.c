/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:19:14 by shomami           #+#    #+#             */
/*   Updated: 2018/01/18 15:38:29 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *ptr;

	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	ptr = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		ptr[i++] = min++;
	return (ptr);
}
