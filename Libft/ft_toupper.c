/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:44:23 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/17 15:34:59 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int ch)
{
	if ((ch >= 97 && ch <= 122))
		return (ch - 32);
	else
		return (ch);
}
/* 
int	main(void)
{
	char	c;

	c = '*';
	printf("%c -> %c", c, ft_toupper(c));

	c = 'D';
	printf("\n%c -> %c", c, ft_toupper(c));

	c = '9';
	printf("\n%c -> %c", c, ft_toupper(c));
	return (0);
} */