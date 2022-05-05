/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:38:25 by vde-prad          #+#    #+#             */
/*   Updated: 2022/05/05 12:49:48 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*aux;

	if (start >= ft_strlen(s))
	{
		sub = ft_calloc(1, 1);
		return (sub);
	}
	aux = (char *)s + start;
	sub = malloc((len + 1) * sizeof(char));
	if (sub == 0)
		return (NULL);
	ft_memcpy(sub, aux, ft_strlen(aux));
	sub[len] = 0;
	return (sub);
}

/*
Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.
*/
