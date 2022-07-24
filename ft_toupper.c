/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 00:05:39 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/25 00:24:55 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char	c = 'a';

	printf("toupper: \t %c pasa a ser %c \n", c, toupper(c));
	printf("ft_toupper: \t %c pasa a ser %c \n", c, ft_toupper(c));
}
*/