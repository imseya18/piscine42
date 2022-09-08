/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:37:46 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/08 10:36:09 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	lower_case(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
	i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	u;

	i = 0;
	u = 1;
	lower_case(str);
	while (str[i] != '\0')
	{
		if (u == 1 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
			u = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			u = 0;
		}
		else if (str[i] < 97 || str[i] > 122)
		{
			u = 1;
		}
	i++;
	}
	return (str);
}
