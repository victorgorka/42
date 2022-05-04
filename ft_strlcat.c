/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:28:17 by vde-prad          #+#    #+#             */
/*   Updated: 2022/04/29 13:39:46 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	min_size;
	size_t	max_size;
	size_t	final_size;

	if (dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	final_size = ft_strlen(dst) + ft_strlen(src);
	min_size = ft_strlen(dst);
	max_size = dstsize - ft_strlen(dst) - 1;
	if (dstsize == 0 || ft_strlen(dst) > dstsize)
		return (final_size);
	ft_memcpy(dst + min_size, src, max_size);
	dst[dstsize - 1] = 0;
	return (final_size);
}
/*
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char	dst1[0xF00] = "there is no stars in the sky";
	char	src1[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char	dst2[0xF00] = "there is no stars in the sky";
	char	src2[] = "the cake is a lie !\0I'm hidden lol\r\n";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	printf("%lu\n",strlcat(dst1, src1, max));
	printf("%zu\n",ft_strlcat(dst2, src2, max));
	puts(dst1);
	printf("%s", dst2);
}
*/
