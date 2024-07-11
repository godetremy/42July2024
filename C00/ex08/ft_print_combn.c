/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 09:45:38 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/11 11:56:07 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_pow(int base, int exp)
{
	int result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;	
	}
	return result;
}

void	ft_putnbr(int nb)
{
	int	character;

	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
		return ;
	}
	if (nb < 10)
	{
		character = 48 + nb;
		write(1, &character, 1);
		return ;
	}
	character = 48 + nb % 10;
	ft_putnbr(nb / 10);
	write(1, &character, 1);
}

void ft_print_combn(int n)
{
	int max_loop;
	int i;

	max_loop = ft_pow(10, n) - 1;
	i = 0;
	while (i <= max_loop)
	{
		ft_putnbr(i/10*n);
		write(1, ", ", 1);
		i++;
	}
}

int main()
{
	ft_print_combn(2);
	return 0;
}
