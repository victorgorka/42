/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:10:06 by vde-prad          #+#    #+#             */
/*   Updated: 2022/05/02 16:09:07 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	if (c == 0)
		return (str);
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char *s1 = "Hola Mundo";
	char *s2 = "Hola Mundo";

	puts(memchr(s1, '\0', 11));
	puts(ft_memchr(s2, '\0', 11));
}
*/
