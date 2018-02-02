/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev-bits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 12:14:52 by shomami           #+#    #+#             */
/*   Updated: 2018/01/31 12:15:01 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


unsigned char	reverse_bits(unsigned char octet)
{
unsigned char a, b, c, d;
unsigned char result;

a = (octet & 128) >> 7;
b = (octet & 64) >> 5;
c = (octet & 32) >> 3;
d = (octet & 16) >> 1;
result = (a | b | c | d);
a = (octet & 8) << 1;
b = (octet & 4) << 3;
c = (octet & 2) << 5;
d = (octet & 1) << 7;
result = result | (a | b | c | d);
return (result);
}

int   main()
{
  printf("%d", reverse_bits(65));
}
