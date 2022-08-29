/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 23:24:34 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/29 00:38:47 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_length(long nb)
{
	size_t	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0 && ++count)
		nb = nb * -1;
	while (nb > 0 && ++count)
		nb = nb / 10;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	length;
	long	nb;

	nb = n;
	length = ft_length(nb);
	str = (void *)ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[length--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[length] = (nb % 10) + '0';
		nb = nb / 10;
		length--;
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