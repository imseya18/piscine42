/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:06:38 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/08 13:52:25 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	i;

	i = 0;
	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && (i < size -1))
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (k);
}
