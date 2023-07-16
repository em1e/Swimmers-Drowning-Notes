/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 04:24:35 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/13 13:46:03 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int main (void)
{
	int n0 = 0;
	int n5 = 5;
	int n10 = 10;
	int n19 = 19;

	printf("\nThe fibonacci of index %d is %d \n", n0, ft_fibonacci(n0));
	printf("Expected result is 0 \n\n");
	printf("The fibonacci of index %d is %d \n", n5, ft_fibonacci(n5));
	printf("Expected result is 5 \n\n");
	printf("The fibonacci of index %d is %d \n", n10, ft_fibonacci(n10));
	printf("Expected result is 55 \n\n");
	printf("The fibonacci of index %d is %d \n", n19, ft_fibonacci(n19));
	printf("Expected result is 4181 \n\n");
	return (0);
}*/
