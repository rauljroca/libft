/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 23:24:34 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/25 13:35:23 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_len_nbr(long nb)
{
	size_t	count;

	count = 0;
	if (nb == 0)
		return (++count);
	if (nb < 0 && ++count)
		nb = nb * -1;
	while (nb > 0 && ++count)
		nb = nb / 10;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_len_nbr(nb);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}
/*
int	main(void)
{
	long long	n = -2147483648LL;
	long long	n2 = 2;
	char	*i;
	char	*i2;
	i = ft_itoa(n);
	i2 = ft_itoa(n2);
	printf("n \t\t= %lld \nft_itoa = %s\n", n, i);
	printf("n2\t\t= %lld \nft_itoa = %s\n", n2, i2);
	return (0);
}

Valor devuelto
La string que represente el número.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción
Utilizando malloc(3), genera una string que represente el valor 
entero recibido como argumento.
Los números negativos tienen que gestionarse.
*/