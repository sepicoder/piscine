/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nums.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:00:29 by shomami           #+#    #+#             */
/*   Updated: 2018/01/11 11:10:43 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int nums;

	nums = '0'
		while( nums <= '9')
		{
			write(1, nums, 1);
		}
}

int		main (void)
	{
		ft_print_numbers();
		return (0);
	}
