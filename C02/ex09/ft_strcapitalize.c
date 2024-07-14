/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 23:21:48 by rgodet            #+#    #+#             */
/*   Updated: 2024/07/14 23:54:40 by rgodet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strupcase(char *chr)
{
	if (*chr >= 'a' && *chr <= 'z')
		*chr -= 32;
}

void	ft_strlowcase(char *chr)
{
	if (*chr >= 'A' && *chr <= 'Z')
		*chr += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next_upt;

	next_upt = 1;
	i = 0;
	while (str[i])
	{
		if (next_upt == 1)
		{
			ft_strupcase(&str[i]);
			next_upt = 0;
		}
		else
		{
			ft_strlowcase(&str[i]);
		}
		if (str[i] < 48 || str[i] >= 58 && str[i] <= 64)
			next_upt = 1;
		if (str[i] >= 91 && str[i] <= 96 || str[i] > 122)
			next_upt = 1;
		i++;
	}
	return (str);
}
