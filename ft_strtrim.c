/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:27:23 by vde-prad          #+#    #+#             */
/*   Updated: 2022/05/11 20:05:40 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_find_char(char const *s1, char const *set)
{

}

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (ft_find_char(s1[i], set))
		i++;
	while (!ft_find_char(s1, set))
	{
		len++;
		s1++;
		set++;
	{
	return ();
}

int	main()
{
	
}
