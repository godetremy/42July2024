/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npalissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:33:00 by npalissi          #+#    #+#             */
/*   Updated: 2024/07/20 09:33:01 by npalissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_value(int value[6][6],int size)
{
	int i;
	int j;
	char c;
	i = 1;
	
	while (i <= size - 2 )
	{
		j = 1;
		while( j <= size - 2)
		{
			c = value[i][j] + '0';
			write(1,&c,1);
			write(1," ",1);
			j++;
		}
		write(1,"\n",1);
		i++;
	}
}
	
void rush01(int value[6][6],int size)
{
	int i;
	int j;
	
	i = 1;

	while (value[0][i] <= size)
	{
		if (value[0][i] == 4)
		{
			j = 1;
			while (j<= size-1 )
			{
				value[j][i] = j;
				j++;
			}
		}
		i++;
	}
	
	i = 1;
	while (value[i][0] <= size)
	{
		if (value[i][0] == 4)
		{
			j = 1;
			while (j <= size-1)
			{
			
				if (value[i][j] == 0)
					value[i][j] = j;
				j++;
			}
		}
		if (value[i][size - 1] == 4)
		{
			j = 4;
			while (j <= size - 1 && j >= 1)
			{
				if (value[i][j] == 0)
					value[i][j] = j;
				j--;
			}
		}	
		i++;
	}
	
	ft_print_value(value, size);
}



int main(int c, char **v)
{
	int value[6][6] = {
		{0,4,3,2,1,0},
		{4,0,0,0,0,1},
		{3,0,0,0,0,2},
		{2,0,0,0,0,2},
		{1,0,0,0,0,2},
		{0,1,2,2,2,0},
	};
	
	int test2[6][6] = {
		{0,1,2,2,2,0},
		{1,0,0,0,0,4},
		{2,0,0,0,0,3},
		{2,0,0,0,0,2},
		{2,0,0,0,0,1},
		{0,4,3,2,1,0},
	};
	
	/*
	value[0][6] = {0,4,3,2,1,0};
	value[1][6] = {4,0,0,0,0,1};
	value[2][6] = {3,0,0,0,0,2};
	value[3][6] = {2,0,0,0,0,2};
	value[4][6] = {1,0,0,0,0,2};
	value[5][6] = {0,1,2,2,2,0};*/
	rush01(value,6);
	write(1, "----------\n", 11);
	rush01(test2,6);
	
	
}
