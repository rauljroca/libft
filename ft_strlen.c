/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:34:13 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/22 21:34:23 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*(s + count))
		count++;
	return (count);
}
/*
int	main(void)
{
	char	c[] = "ABC";
	printf("%s -> %d - lenght \n", c, ft_strlen(c));	
	printf("%s -> %lu - strlen \n", c, strlen(c));	
	char	c2[] = " B ";
	printf("%s -> %d - lenght \n", c2, ft_strlen(c2));
	printf("%s -> %lu - strlen \n", c2, strlen(c2));	
	char	c3[] = "a";
	printf("%s -> %d - lenght \n", c3, ft_strlen(c3));
	printf("%s -> %lu - strlen \n", c3, strlen(c3));	
	char	c4[] = " ";
	printf("%s -> %d - lenght \n", c4, ft_strlen(c4));
	printf("%s -> %lu - strlen \n", c4, strlen(c4));	
}*/