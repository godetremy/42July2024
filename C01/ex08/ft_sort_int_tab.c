/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:44:51 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/11 17:59:21 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int min_i;

	while (i < size - 1)
	{
		min_i = i;
		while (j < size)
		{
			if (j < min_i)
				ft_swap(&tab[min_i], &tab[j]);
			j++;
		}
		i++;
	}
}

int main()
{
	int a[5];
	a[0] = 5;
	a[1] = 2;
	a[2] = 4;
	a[3] = 1;
	a[4] = 3;


	int i = 0;
	ft_sort_int_tab(a, 5);
	while(a[i])
	{
		printf("%d", a[i]);
		i++;
	}
}
