/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 00:59:14 by shomami           #+#    #+#             */
/*   Updated: 2018/02/01 01:37:59 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	 ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	int i;
	char cpy;

	i = 0;
	while (i < ft_strlen(str) / 2 )
	{
		cpy = str[ft_strlen(str) - 1 - i];
		str[ft_strlen(str) - 1 - i] = str[i];
		str[i] = cpy;
		i++;
	}
	return(str);
}

int main(void)
{
	char a[8] = "abcd";
	printf("%s", ft_strrev(a));
}
	
