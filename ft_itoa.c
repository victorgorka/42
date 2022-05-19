/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:15:47 by vde-prad          #+#    #+#             */
/*   Updated: 2022/05/19 19:11:55 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_itoa(int n)
{
	unsigned int	i;
	long int		aux;
	char			*res;

	aux = n;
	i = 0;
	//cuenta numero de digitos
	while (aux != 0)
	{
		if (aux >= 9 || aux <= -9)
		{
			i++;
			aux /= 10;
		}
		if (aux <= 9 || aux >= -9)
		{
			i++;
			break;
		}
	}
	//reserva memoria y establece signo
	if (n < 0)
	{
		res = (char *)malloc((i + 1) * sizeof(char));
		res[0] = '-';
		i++;
	}
	else	
		res = (char *)malloc((i) * sizeof(char));
	
}

int main()
{

}
