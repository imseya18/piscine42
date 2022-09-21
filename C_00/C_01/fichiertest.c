/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fichiertest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:04:42 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/06 14:22:01 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int a)
{
	printf("%d ", a);
}

void trade(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
    *b = c;
}

void	ft_putstr(int *tab, int size)
{	
		int i;
		int j;
		int c;
		
		j = 0;
		i = 0;
		while (j < size)
		{
			i = 0;
			while (i < size - 1)
			{
				if ( tab[i] > tab [i+1])
				{
					c = tab[i];
					tab[i] = tab[i+1];
					tab[i+1] = c;
				}
				i++;
			}
			j++;
		}
   		i=0;
		while (i < size)
		{
			ft_putchar(tab[i]);
			i++;
		}


}

int	main(void)
{
	 int tab[5];
	 tab[0] = 4;
	 tab[1] = 3;
	 tab[2] = 2;
	 tab[3]	= 1;
	 tab[4] = 0;
	ft_putstr(tab, 5);
}
