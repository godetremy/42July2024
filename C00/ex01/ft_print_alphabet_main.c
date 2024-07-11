/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:49:07 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/10 11:52:25 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char c;
	
	c = 'a';
	while(c <= 'z') {
		write(1, &c, 1);
		c++;
	}
};

int main()
{
	ft_print_alphabet();
	return 0;
};
