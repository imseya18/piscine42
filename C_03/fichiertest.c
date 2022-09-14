/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fichiertest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:04:42 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/10 11:53:54 by mmorue           ###   ########.fr       */
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

int ft_strcmp(char *s1, char *s2)
{

	int i;
	i = 0;
	while (s1[i] != '\0' &&  s1[i] == s2[i])
		i++;
	return(s1[i] - s2[i]);

}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int k;
	
	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	i = 0;
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}	
	return(dest);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	unsigned int k;
	
	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0' && k < nb)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	i = 0;
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}	
	return (dest);
	





}


int	main(void)
{
	char dest[] = "salut";
	char src[] = "bonjour";
	ft_strncat(dest, src, 5);

//	printf("%s", ft_strcat(dest, src));
}
