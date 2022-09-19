/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:30 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/17 11:51:19 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}	
	else
	{
		*range = (int *)malloc((max - min) * sizeof(int));
		if (!*range)
			return (-1);
		while (min + i < max)
		{
			(*range)[i] = min + i;
			i++;
		}
		return (max - min);
	}
}

//int	main(void)
//{
//	int	*f;
//	int	i;
//
//	ft_ultimate_range(&f, 40, 45);
//	i = 0;
//	while (f[i])
//	{
//		printf("%d\n", (f[i]));
//		i++;
//	}
//	return (0);
//}
