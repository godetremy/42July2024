/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:41:12 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/17 08:18:43 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_str_trim(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] == 32)
		i++;
	j = 0;
	while (str[j])
	{
		str[j] = str[j + i];
		j++;
	}
}

void checkSymbol(char *str, int *smb)
{
	int is_symbol;
	int i;
	
	is_symbol = 1;
	while(is_symbol > 0)
	{
		if (str[0] == 45)
			*smb *= -1;
		else if (str[0] == 43)
			*smb *= 1;
		else
			is_symbol = 0;
		if (is_symbol > 0)
		{
			i = 0;
			while (str[i])
			{
				str[i] = str[i + 1];
				i++;
			}
		}
	}
}

void	ft_rev_char_tab(char *tab, int size)
{
	char	temp;
	int		loop_max;
	int		i;

	loop_max = size / 2 - 1;
	i = 0;
	while (i <= loop_max)
	{
		temp = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = temp;
		i++;
	}
}

int ft_atoi(char *str)
{
	int		symbol;
	int		i;
	char	char_list[1024];
	int 	res;
	int 	pow;
	int 	size;
	
	symbol = 1;
	ft_str_trim(str);
	checkSymbol(str, &symbol);
	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		char_list[i] = str[i];
		i++;
	}
	char_list[i] = '\0';
	size = i;
	if (size > 0) {
		ft_rev_char_tab(char_list, i);
		i = 0;
		res = 0;
		pow = 1;
		while (i < size)
		{
				res += (char_list[i] - 48) * pow;
			pow *= 10;
			i++;
		}
		res = res * symbol;
	}
	return res;
}
