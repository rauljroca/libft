/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:22:32 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/05 00:40:43 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
int	main(void)
{
	char *s = "hola";

	ft_putstr_fd(s, 1);
}

Parámetros s:
La string a enviar.
fd: El file descriptor sobre el que escribir.
Valor devuelto
Nada
Funciones autorizadas
write
Descripción
Envía la string ’s’ al file descriptor especificado.
*/