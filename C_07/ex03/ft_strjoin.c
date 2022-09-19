/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:01:42 by mmorue            #+#    #+#             */
/*   Updated: 2022/09/17 11:57:01 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strs_leng(char **strs, int size)
{
	int	i;
	int	k;
	int	res;

	i = 0;
	k = 0;
	res = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i] != '\0')
			i++;
		res = res + i;
		k++;
	}
	return (res);
}

int	ft_sep_leng(char *sep, int size)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i * (size - 1));
}

char	*ft_join(char **strs, char *sep, char *tab, int res)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	while (i < res)
	{
		j = 0;
		while (strs[k][j] != '\0')
			tab[i++] = strs[k][j++];
		j = 0;
		while (sep[j] != '\0' && i < res)
		{
			tab[i] = sep[j];
			i++;
			j++;
		}
		k++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	int		res;
	char	*tab;

	if (size == 0)
	{
		return (malloc(0));
	}
	res = 0;
	res = ft_strs_leng(strs, size);
	res = res + ft_sep_leng(sep, size);
	tab = (char *)malloc(res + 1 * sizeof(char));
	return (ft_join(strs, sep, tab, res));
}
//int	main(void)
//{
//char **strs;
//char *dy;
//
//strs = (char **)malloc(5 * sizeof(char *));
//strs[0] = "Salut";
//strs[1] = "testA testB testC";
//strs[2] = "uuuu";
//strs[3] = "Rhh Rhhh";
//strs[4] = "Ahhhhhhhh";
//char *sep = " | CUT | ";
//dy = ft_strjoin(0, strs, sep);
//printf("%s", ft_strjoin(0, strs, sep));
//}