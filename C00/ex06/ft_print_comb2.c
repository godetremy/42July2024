/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:05:52 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/10 17:41:04 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int n)
{
	int	first;
	int	second;

	first = 48 + n / 10;
	second = 48 + n % 10;
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_print_comb2(void)
{
	int	pos1;
	int	pos2;

	pos1 = 0;
	pos2 = 0;
	while (pos1 <= 99)
	{
		while (pos2 <= 99)
		{
			if (pos1 < pos2)
			{
				ft_write_number(pos1);
				write(1, " ", 1);
				ft_write_number(pos2);
				if (pos1 == 98 && pos2 == 99)
					return ;
				write(1, ", ", 2);
			}
			pos2++;
		}
		pos2 = 0;
		pos1++;
	}
}
