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

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_i;

	i = 0;
	while (i < size - 1)
	{
		min_i = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_i])
				min_i = j;
			j++;
		}
		ft_swap(&tab[min_i], &tab[i]);
		i++;
	}
}
