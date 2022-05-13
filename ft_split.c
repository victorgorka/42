/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:45:28 by vde-prad          #+#    #+#             */
/*   Updated: 2022/05/13 17:28:39 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
static unsigned int	ft_nstrings(char const *s, char c)
{
	unsigned int	res;

	res = 1;
	while (*s)
	{
		if (*s == c)
		{
			res++;
			while (*s == c)
				s++;
		}
		else
			s++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char 			**tab;
	unsigned int	i;

	i = 0;
	if (!*s)
		return (0);
	tab = (char **)malloc(ft_nstrings(s, c) * sizeof(char *));
	if (!tab)
		return (0);
	return (0);
}


#include <stdio.h>

int main()
{
	//printf("size of char *: %lu\n", sizeof(char *));
	printf("%d", ft_nstrings("cholacmundoccccctontoc", 'c'));
}
