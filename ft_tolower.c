/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 00:26:50 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/25 00:31:49 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32) ;
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char	c = 'A';

	printf("tolower: \t %c pasa a ser %c \n", c, tolower(c));
	printf("ft_tolower: \t %c pasa a ser %c \n", c, tolower(c));
}
*/