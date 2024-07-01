/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:53:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/10/05 15:42:13 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_lendigit(long number)
{
	int	size;

	size = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		size++;
	while (number != 0)
	{
		number /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*string;
	long	number;

	number = (long)n;
	size = ft_lendigit(number);
	string = (char *)ft_calloc(size + 1, 1);
	if (string == 0)
		return (0);
	if (number < 0)
	{
		string[0] = '-';
		number *= -1;
	}
	while (0 < size && string[--size] != '-')
	{
		string[size] = (number % 10) + '0';
		number /= 10;
	}
	return (string);
}

/* int	main(void)
{
	char	*str;
	int		n;

	n = -12345;
	str = ft_itoa(n);
	if (str == NULL)
		printf("Error en la asignación de memoria");
	printf("Todo bien, todo correctol\n");
	printf("El valor %d fue convertido y asignado a str: %s\n", n, str);
	printf("Dirección de memoria: %p\n", &str);
	free(str);
} */
/* void	*fill(char *str, long n, int size)
{
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		while (size)
		{
			str[size--] = (n % 10) + '0';
			n /= 10;
		}
	}
	else
	{
		while (size)
		{
			str[--size] = (n % 10) + '0';
			n /= 10;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		temp_n;
	int		size;
	char	*string;
	long	n_long;

	n_long = (long)n;
	if (n_long == 0)
	{
		string = (char *)calloc(2, 1);
		string[0] = '0';
		return (string);
	}
	size = 0;
	temp_n = n_long;
	while (temp_n != 0 && ++size)
		temp_n /= 10;
	if (n_long < 0)
		string = (char *)calloc(size + 2, 1);
	else
		string = (char *)calloc(size + 1, 1);
	if (!string)
		return (0);
	fill(string, n_long, size);
	return (string);
} */

/* int	main(void)
{
	char	*str;
	int		n;

	n = -12345;
	str = ft_itoa(n);

	if (str == NULL)
		printf("Error en la asignación de memoria");
	printf("Todo bien, todo correctol\n");
	printf("El valor %d fue convertido y asignado a str: %s\n", n, str);
	printf("Dirección de memoria: %p\n", &str);
	free(str);
} */