/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seya <seya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:41:19 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/27 14:08:41 by seya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*nul;
	int	*tab;
	int	i;

	nul = 0;
	i = 0;
	if (min >= max)
		return (nul);
	else
	{	
		tab = (int *)malloc((max - min) * sizeof(int));
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
		tab[i] = '\0';
		return (tab);
	}
}
int main(void)
//{	int *tab;
//	int i;
//
//	i = 0;
//
//	tab = ft_range(40 , 45);
//
//	while (tab[i])
//		printf("%d\n",tab[i++]);
//
//
//		//ft_range(50 , 48);
//}//