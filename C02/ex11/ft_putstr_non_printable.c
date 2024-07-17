/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:30:44 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/15 13:55:08 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int nb)
{
	char	hex[2];
	int		i;
	int		j;
	int		val;

	i = 0;
	while (nb != 0)
	{
		val = nb % 16;
		if (val < 10)
			val += 48;
		else
			val += 87;
		hex[i++] = val;
		nb = nb / 16;
	}
	j = 0;
	if (i < 2)
		write(1, "0", 1);
	while (hex[j])
	{
		write(1, &hex[j], 1);
		j++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			print_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
