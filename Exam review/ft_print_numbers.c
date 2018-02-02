/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 13:54:16 by shomami           #+#    #+#             */
/*   Updated: 2018/01/19 14:08:31 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char number;

	number ='9';
	while (number >= '0')
	{
		ft_putchar(number);
		number--;
	}
	ft_putchar('\n');
}

int 	main(void)
{
	ft_print_numbers();
	return (0);
}
