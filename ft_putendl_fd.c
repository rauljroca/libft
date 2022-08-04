/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:32:27 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/05 00:40:54 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char *s = "hola";

	ft_putendl_fd(s, 1);
}

Parámetros s:
La string a enviar.
fd: El file descriptor sobre el que escribir.
Valor devuelto
Nada
Funciones autorizadas
write
Descripción
Envía la string ’s’ al file descriptor dado,
seguido de un salto de línea.
*/