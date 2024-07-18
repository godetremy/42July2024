/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:24:54 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/16 09:56:44 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	find_size;

	find_size = 0;
	while (to_find[find_size])
		find_size++;
	if (find_size == 0)
		return (&str[0]);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] == str[i + j])
			{
				if (j == find_size - 1)
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
