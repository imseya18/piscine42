/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:48:45 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/12 14:22:51 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{	
	if (nb == 0)
		return (1);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
/*int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}*/