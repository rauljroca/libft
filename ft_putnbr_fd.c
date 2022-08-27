/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:47:43 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/28 01:05:39 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	r;
	char	nbr;

	r = n;
	if (r < 0)
	{
		write (fd, "-", 1);
		r = r * -1;
	}
	if (r >= 10)
	{
		ft_putnbr_fd(r / 10, fd);
		ft_putnbr_fd(r % 10, fd);
	}
	else
	{
		nbr = r + '0';
		write (fd, &nbr, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(-42, 1);
	write(1, "\n \n", 1);
	return (0);
}

Parámetros
n: El número que enviar.
fd: El file descriptor sobre el que escribir.
Valor devuelto
Nada
Funciones autorizadas
write
Descripción
Envía el número ’n’ al file descriptor dado.
*/