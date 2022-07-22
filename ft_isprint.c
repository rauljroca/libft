/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:36:15 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/22 21:36:16 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	else
		return (0);
}
/*
int	main(void)
{
	char c = '	';
	printf("%c -> %d - 1 is print \n", c, ft_isprint(c));
	char c2 = '3';
	printf("%c -> %d - 1 is print \n", c2, ft_isprint(c2));
	char c3 = '.';
	printf("%c -> %d - 1 is print \n", c3, ft_isprint(c3));

}
*/