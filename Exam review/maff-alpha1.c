/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff-alpha1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 12:58:11 by shomami           #+#    #+#             */
/*   Updated: 2018/01/26 13:05:02 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int 	main()
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
}
