/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:06:39 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/13 14:27:27 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		temp = temp * (nb - 1);
		nb--;
	}
	return (temp);
}	
/*int main(void)
{
	printf("%d",ft_iterative_factorial(0));
}*/