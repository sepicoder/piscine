/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:00:17 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/26 14:48:28 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_pow(int b, int e)
{
	int ret = 1;
	while(e > 0)
	{
		ret = ret * b;
		e--;
	}
	return (ret);
}

void	print_bits(unsigned char octet)
{
	int i = 7;
	int c;

	while (i >= 0)
	{
		if (octet >= ft_pow(2,i))
		{
			octet -= ft_pow(2,i);
			write(1, "1", 1);
		}
		else
			write(1, "0", 1);
		i--;
	}	
}

int		main()
{
	int i = 0;
	unsigned char octet = 3;
	while(i < 256)
	{
		octet = i;
		print_bits(octet);
		printf("\ti = %d\n",i);
		i++;
	}
	return (0);
}
