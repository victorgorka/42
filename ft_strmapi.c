/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:47:34 by vde-prad          #+#    #+#             */
/*   Updated: 2022/05/26 19:57:13 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	fun(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*res;

	size = ft_strlen(s);
	i = 0;
	res = ft_strdup(s);
	if (!res)
		return (0);
	while (i < size)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}

/*
int main()
{
	char *str = "hola perita";
	char *res = ft_strmapi(str, fun);

	puts( res);
}
*/
