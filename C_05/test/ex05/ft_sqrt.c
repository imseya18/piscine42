/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:22:45 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/13 16:55:57 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i) < nb && i < 46340)
		i++;
	if ((i * i) == nb)
		return (i);
	return (0);
}
/*int	main(void)
{
	printf("%d",ft_sqrt(329476));
}*/