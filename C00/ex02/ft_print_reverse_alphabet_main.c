/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:31:22 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/10 12:31:22 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char c;
	
	c = 'z';
	while(c >= 'a') {
		write(1, &c, 1);
		c--;
	}
};

int main()
{
	ft_print_reverse_alphabet();
	return 0;
};
