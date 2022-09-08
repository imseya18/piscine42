/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fichiertest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:04:42 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/08 18:09:31 by mmorue           ###   ########.fr       */
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
int	main(void)
{
	char s1[] = "salut";
	char s2[] = "salut";
	ft_strcmp(s1, s2);

	printf("%d", ft_strcmp(s1, s2));
}
