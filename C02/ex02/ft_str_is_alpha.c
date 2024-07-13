/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:56:01 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/13 15:35:14 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;
	int	i;

	is_alpha = 1;
	i = 0;
	while (str[i])
	{
		printf("%d\n", str[i]);
		if (!(str[i] >= 'A' && str[i] <= 'z'))
			is_alpha = 0;
		if (str[i] >= 91 && str[i] <= 96)
			is_alpha = 0;
		i++;
	}
	return (is_alpha);
}
