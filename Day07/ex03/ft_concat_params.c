/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 21:05:26 by shomami           #+#    #+#             */
/*   Updated: 2018/01/18 23:01:37 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*arguments;
	int		i;
	int		j;
	int		count;

	arguments = malloc(sizeof(char) * (argc));
	count = 0;
	i = 1;
	while (argc > i)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			arguments[count] = argv[i][j];
			count++;
			j++;
		}
		if ((i + 1) < argc)
			arguments[count] = '\n';
		count++;
		i++;
	}
	arguments[count - 1] = '\0';
	return (arguments);
}
