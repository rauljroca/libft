/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:47:43 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/05 02:23:23 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long 	nbr;
	c = '0';

	nbr = n;
	if (nbr < 0)
		printf("N es más pequeño que cero \n");
//		write (fd, "-", 1);
		nbr = nbr * -1;
	if (nbr >= 10)
	{
		printf("N es %ld y es mayor que 10 \n", nbr);
		ft_putnbr_fd(nbr / 10, fd);
	}
	printf("N es %ld y es menor que 10\n", nbr);
	c = nbr + '0';
	write (fd, &c, 1);
}

int	main(void)
{
	int nbr0 = -42;
	int nbr1 = 1;
//	int nbr2 = 46;
//	int nbr3 = 80000;

	ft_putnbr_fd(nbr0, 1);
	write(1, "\n \n", 1);
	ft_putnbr_fd(nbr1, 1);
	write(1, "\n \n", 1);
//	ft_putnbr_fd(nbr2, 1);
//	write(1, "\n \n", 1);
//	ft_putnbr_fd(nbr3, 1);
//	write(1, "\n \n", 1);

	return (0);
}
/*
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