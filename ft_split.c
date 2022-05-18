/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:45:28 by vde-prad          #+#    #+#             */
/*   Updated: 2022/05/18 16:19:33 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include "libft.h"

#include <stdio.h>
static unsigned int	ft_nstrings(char const *s, char c)
{
	unsigned int	res;
	unsigned int	sep;

	sep = 0;
	res = 0;
	while (*s)
	{
		if (*s != c && sep == 0 )
		{
			res++;
			sep = 1;
		}
		else if (*s == c)
			sep = 0;
		s++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char 			**tab;
	char			**start;
	unsigned int	i;
	char			*cpy;
	unsigned int	aux;

	aux = 0;
	cpy = (char *)ft_strdup(s);
	i = 0;
	if (!s)
		return (0);
	tab = (char **)malloc(ft_nstrings(s, c) * sizeof(char *));
	start = tab;
	if (!tab)
		return (0);
	while (cpy[i])
	{
		if (cpy[i] == c)
			cpy[i] = '\0';
		i++;
	}
	i = 0;
	while (i < ft_strlen(s))
	{
		if(cpy[i] != '\0' && aux == 0 )
		{
			*tab = ft_strdup(&cpy[i]);
			aux = 1;
			tab++;
		}
		else if (cpy[i] == '\0')
			aux = 0;
		i++;
	}
	return (start);
}


/*
int	main(void)
{
	char	*s = "      split       this for   me  !       ";
	char	**ret = ft_split(s, ' ');
//	printf("%d", ft_nstrings(s, ' '));
	printf("%s\n", ret[0]);
	printf("%s\n", ret[1]);
	printf("%s\n", ret[2]);	
	printf("%s\n", ret[3]);
	printf("%s\n", ret[4]);
	free(ret);
}
*/
