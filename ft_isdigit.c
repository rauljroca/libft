/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:37:45 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/22 21:37:47 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c) {

	return (c >= 48 && c <= 57);
}
/*
// gcc -Wall -Wextra -Werror ft_isdigit.c -L. -lft && ./a.out
int	main(void)
{
	char c = 'a';
	printf("%c -> %d - 1 is digit; 2 no digit \n", c, ft_isdigit(c));
	char c2 = '3';
	printf("%c -> %d - 1 is digit; 0 no digit \n", c2, ft_isdigit(c2));

}
*/