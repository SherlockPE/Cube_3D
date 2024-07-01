/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:24:23 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/13 13:04:53 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (c);
}
// #include <stdio.h>
// int main(void)
// {
// 	char word;

// 	word = 8;
// 	printf("The letter '%c' is: %d\n", word, ft_isprint(word));

// 	word = 57;
// 	printf("The letter '%c' is: %d\n", word, ft_isprint(word));

// 	word = 23;
// 	printf("The letter '%c' is: %d\n", word, ft_isprint(word));

// 	word = 65;
// 	printf("The letter '%c' is: %d\n", word, ft_isprint(word));

// 	word = 95;
// 	printf("The letter '%c' is: %d\n", word, ft_isprint(word));
// 	return (0);
// }
