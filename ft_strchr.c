/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:59:17 by vde-prad          #+#    #+#             */
/*   Updated: 2022/05/09 12:03:02 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	if (*s == 0)
		return ((char *)s);
	while (*s != 0)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
		if (*s == (unsigned char)c)
			return ((char *)s);
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[] = "tripouille";
	puts(ft_strchr(s, 't' + 256));
}
*/
