#include <stdlib.h>
#include <unistd.h>

int	count_word(char *str)
{
	int	i;
	int	k;
	int	count;

	i = 0;
	k = 1;
	count = 0;

	while (str[i])
	{
		if ((str[i] >= 33 && str[i] <= 126) && k == 1)
		{
			count++;
			k = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			k = 1;
		i++;
	}
	return(count);
}

char		**ft_split(char *str)
{	
	char **tab;
	int i;
	int size;
	int nb;
	int j;

	i = 0;
	tab = NULL;
	nb = 0;
	j = 0;

	tab = malloc((count_word(str) + 1) * sizeof(str));

	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			while(str[i] >= 33 && str[i] <= 126)
			{
				size++;
				i++;
			}
			tab[nb] = malloc((size + 1) * sizeof(char));
			nb++;
			size = 0;
		}
		i++;
	}
	nb = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			while(str[i] >= 33 && str[i] <= 126)
			{
				tab[nb][j] = str[i];
				j++;
				i++;
			}
			tab[nb][j] = '\0';
			nb++;
			j = 0;
		}
		i++;
	}
	tab[nb] = NULL;
	return(tab);
}

int main(void)
{
	char tab[] = "salut les amis \n comment \n ca 		va \n 	oui	";
	ft_split(tab);
	return (0);
}