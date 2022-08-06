/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:47:43 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/06 22:06:46 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
/*
	long	r;

	r = n;
	if (r < 0)
	{
		ft_putchar_fd('-', fd);
		r = r * -1;
	}
	if (r >= 10)
	{
		ft_putnbr_fd(r / 10, fd);
		ft_putnbr_fd(r % 10, fd);
	}
	else
	{
		ft_putchar_fd(r + '0', fd);
	}
*/
}
/*
// write (fd, &c, 1);
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int nbr0 = -42;
//	int nbr1 = 1;
//	int nbr2 = 46;
//	int nbr3 = 80000;

	ft_putnbr_fd(nbr0, 1);
	write(1, "\n \n", 1);
//	ft_putnbr_fd(nbr1, 1);
//	write(1, "\n \n", 1);
//	ft_putnbr_fd(nbr2, 1);
//	write(1, "\n \n", 1);
//	ft_putnbr_fd(nbr3, 1);
//	write(1, "\n \n", 1);

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