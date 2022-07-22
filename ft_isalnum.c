/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:38:49 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/22 21:38:51 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (
		(c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122)
	);
}
/*
// gcc -Wall -Wextra -Werror ft_isalnum.c -L. -lft && ./a.out
int	main(void)
{
	char c = 'a';
	printf("%c -> %d - 1 is digit or alpha \n", c, ft_isalnum(c));
	char c2 = '3';
	printf("%c -> %d - 1 is digit or alpha \n", c2, ft_isalnum(c2));
	char c3 = '.';
	printf("%c -> %d - 1 is digit or alpha \n", c3, ft_isalnum(c3));

}
*/