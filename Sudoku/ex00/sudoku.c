/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 13:59:16 by jkimmina          #+#    #+#             */
/*   Updated: 2018/01/20 19:45:03 by jkimmina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	printpuzzle(int **p)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			printf("%d",p[i][j]);
			if (j < 8)
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
}

int		**copyparams(char **v)
{
	int i;
	int j;
	int **p;

	p = (int **)malloc(sizeof(int*) * 10);
	i = 0;
	while (i < 9)
	{
		p[i] = (int*)malloc(sizeof(int) * 10);
		j = 0;
		while (j < 9)
		{
			if (v[i+1][j] >= '0' && v[i+1][j] <= '9')
				p[i][j] = v[i+1][j] - '0';
			else
				p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}	

int		isvalid(int **p, int x, int y, int val)
{
	int i;
	int sqr = (x / 3) + (3 * (y / 3));

	i = 0;
	while(i < 9)
	{
		if ((i != y && p[x][i] == val) || (i != x && p[i][y] == val))
			return (0);
		if (p[(sqr % 3) * 3 + (i % 3)][(sqr % 3) * 3 + (i / 3)] == val)
			return (0);
		i++;
	}
	return (1);
}

int		**solve(int **p)
{
	int i;
	int j;
	int val;
	int isfull;

	printpuzzle(p);
	printf("\n");
	val = 1;
	i = 0;
	isfull = 0;
	while(i < 9)
	{
		j = 0;
		while (j < 9)
		{
			while (p[i][j] == 0 && val < 10)
			{
				//printf("Checking %d,%d\n",i,j);
				if(isvalid(p,i,j,val))
				{
					p[i][j] = val;
					p = solve(p);
				}
				val++;
				isfull = 1;
			}
			j++;
		}
		i++;
	}
	return (p);
}

int		main(int argc, char **argv)
{
	int **puzzle;

	if (argc != 10)
	{
		printf("Error\n");
		return 0;
	}
	puzzle = copyparams(argv);
	puzzle = solve(puzzle);
	printpuzzle(puzzle);
}
