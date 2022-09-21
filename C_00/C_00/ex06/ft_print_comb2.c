/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:17:57 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/04 17:25:44 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a1, char a2, char b1, char b2)
{
	if (b1 > a1 || (b1 == a1 && b2 > a2))
	{
		write(1, &a1, 1);
		write(1, &a2, 1);
		write(1, " ", 1);
		write(1, &b1, 1);
		write(1, &b2, 1);
		if (a1 != '9' || a2 != '8' || b1 != '9' || b2 != '9')
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
	}
}

void	calcul(char a1, char a2, char b1, char b2)
{
	while (a1 != '9' || a2 != '9')
	{	
		b1 = '0';
		b2 = '0';
		while (b1 != '9' || b2 != '9')
		{
			if (b2 == '9')
			{
				b1++;
				b2 = '0';
			}
			else
			{
				b2++;
			}
			print(a1, a2, b1, b2);
		}	
		if (a2 == '9')
		{	
			a1++;
			a2 = '0';
		}
		else
			a2++;
	}
}

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = '0';
	a2 = '0';
	b1 = '0';
	b2 = '0';
	calcul(a1, a2, b1, b2);
}
