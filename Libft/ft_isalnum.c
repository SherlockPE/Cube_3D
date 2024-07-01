/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:30:52 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/13 11:17:20 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c < '0' || c > '9') && (c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	else
		return (1);
}
// #include <stdio.h>
// int main()
// {
//     char c;
//     int result;

//     c = '5';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'Q';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'l';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = '+';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     return 0;
// }