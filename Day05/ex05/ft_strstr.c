/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 18:00:00 by shomami           #+#    #+#             */
/*   Updated: 2018/01/16 19:51:56 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *start;
	char *substring;

	while (*str != '\0')
	{
		start = str;
		substring = to_find;
		while (*str != '\0' && substring != '\0' && *str == *substring)
		{
			str++;
			substring++;
		}
		if (!*substring)
			return (start);
		str = start + 1;
	}
	return (0);
}
