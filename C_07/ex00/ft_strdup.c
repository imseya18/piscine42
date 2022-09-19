/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:46:50 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/17 11:51:00 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		k;
	char	*dest;

	i = 0;
	k = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc((i + 1) * sizeof(char));
	while (src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	src[] = "coucou les amis";
	printf("%s\n", ft_strdup(src));
	return (0);
}*/