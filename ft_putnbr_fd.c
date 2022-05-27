/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:16:15 by vde-prad          #+#    #+#             */
/*   Updated: 2022/05/27 14:20:45 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char			*aux;
	char			*res;
	long			num;
	unsigned int	i;

	i = 0;
	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (num == 0)
	{
		ft_putchar_fd('0');
		break;
	}
	while (num != 0)
	{
		*aux
	}
}

