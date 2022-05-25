/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:47:34 by vde-prad          #+#    #+#             */
/*   Updated: 2022/05/25 14:52:34 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	fun(unsigned int i, char c)
{
	return (c + 1);
}

/*
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

}
*/

void	print(char *str, char (*f)(unsigned int, char))
{
	while (*str)
		printf("%c", fun(0, *str++));
}


int main()
{
	char *str = "hola perita";
	print(str, fun);
}
