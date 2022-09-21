/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:33:11 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/17 14:09:13 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	calcul(char *str, int i, int k)
{	
	int	res;

	res = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (k % 2 != 0)
		res = -res;
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			i++;
			k++;
		}
		if (str[i] == '+')
		i++;
	}
	return (calcul(str, i, k));
}
/*int	main(void)
{
	char	str[] = "   		---+-j-+--12045salut1245";
	ft_atoi(str);
	printf("%d", ft_atoi(str));
}*/