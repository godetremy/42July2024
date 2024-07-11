/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:47:33 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/10 17:57:50 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb*-1);
		return ;
	}
	if (nb < 10)
	{
		int character = 48 + nb;
		write(1, &character, 1);
		return ;
	}
}

int main()
{
	ft_putnbr(5);
	return 0;
}
