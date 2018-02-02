/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 15:41:27 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/26 16:16:01 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		printlast(char *str)
{
  char *marker;

	 while(*str)
	 {
		  if(*str && *str != ' ' && *str != '\t')
			{
				marker = str;
				while(*str && *str != ' ' && *str != '\t')
				   str++;
			}
			while(*str == ' ' || *str == '\t')
			   str++;
	 }
	 while(*marker && *marker != ' ' && *marker != '\t')
	   write(1, marker++, 1);
}


int  main(int argc, char **argv)
{
	 if(argc == 2)
	 {
		  printlast(argv[1]);
	 }
	 write(1, "\n", 1);
	 return (0);
}
