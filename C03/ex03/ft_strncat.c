/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:10:59 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/16 09:17:45 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	if (i > 0) {
		j = 0;
		while (src[j] != '\0' && j < nb)
		{
			dest[j + i] = src[j];
			j++;
		}
		dest[j + i] = 0;
	}
	return (dest);
}
