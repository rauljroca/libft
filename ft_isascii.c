/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 01:09:51 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/26 01:18:55 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{	
	return (c >= 0 && c <= 127);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char c = '`';
	printf("%c -> %d; 1 is ascii, 0 no ascii \n", c, ft_isascii(c));
	char c2 = '3';
	printf("%c -> %d; 1 is ascii, 0 no ascii \n", c2, ft_isascii(c2));
	return (0);
}
*/