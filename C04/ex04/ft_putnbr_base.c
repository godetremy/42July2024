/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:36:36 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/18 11:48:28 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_base(char *base, int size)
{
	int i;
	int j;

	if (size < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		j = 0;
		while (base[j])
		{
			if (j != i && base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_number(int nb, int base_size, char *base)
{
	if (nb < 10)
	{
		write(1, &base[nb % base_size], 1);
	}
	else
	{
		print_number(nb / base_size, base_size, base);
		write(1, &base[nb % base_size], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_size;

	base_size = ft_strlen(base);
	if (check_base(base, base_size) < 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	print_number(nbr, base_size, base);
}
