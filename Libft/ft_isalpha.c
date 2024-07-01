/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:14:22 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/13 16:40:21 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		return (0);
	else
		return (c);
}
// int main()
// {
//     char c;
//     c = 'Q';
//     printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

//     c = 'q';
//     printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

//     c='+';
//     printf("\nResult when non-alphabet
//ic character is passed: %d", ft_isalpha(c));

//     return 0;
// }