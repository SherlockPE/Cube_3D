/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:15:11 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/13 13:05:08 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (c);
}
// int main()
// {
//     char c;
//     c='5';
//     printf("Result when numeric character is passed: %d", ft_isdigit(c));

//     c='+';
//     printf("\nResult when non-numeric character is passed: %d",
//	ft_isdigit(c));

//     return (0);
// }
