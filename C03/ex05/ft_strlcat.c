/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:12:54 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/16 10:20:37 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i])
		i++;
	j = 0;
	while (j <= i && j < size)
	{
		dest[j + i - 1] = src[j];
		j++;
	}
	return (j);
}
