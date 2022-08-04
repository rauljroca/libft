/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:09:05 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/05 00:19:56 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int	main(void)
{
    char chr = 'G';
    ft_putchar_fd(chr, 1);
    return(0);
}

Parámetros
c: El carácter a enviar.
fd: El file descriptor sobre el que escribir.
Valor devuelto
Nada
Funciones autorizadas
write
Descripción
Envía el carácter ’c’ al file descriptor especificado.
*/