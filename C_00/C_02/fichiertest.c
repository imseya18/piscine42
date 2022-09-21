/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fichiertest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:04:42 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/08 15:14:08 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int a)
{
	printf("%c", a);
}

void  lower_case(char *str)
{
	int k;

	k = 0;

	while(str[k] != '\0')
	{
		if (str[k] >= 65 && str [k] <= 90)
		{
			str[k] = str[k] + 32;
		}
	k++;	
	}
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{

	unsigned int i;
	unsigned int k;

	k = 0;
	i = 0;

	if (size != 0)
	{
	while (src[k] != '\0')
	{
		k++;
	}	
	while (src[i] != '\0' && (i < size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	}
	return (k);
}
int	main(void)
{
	char src[] = "saluti";
	char dest[] = "coucou";
	ft_strlcpy(dest, src, 3);

	printf("%d", k);
}
