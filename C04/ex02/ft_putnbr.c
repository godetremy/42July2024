/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:47:33 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/11 16:28:30 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	character;

	if (nb <= -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
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
