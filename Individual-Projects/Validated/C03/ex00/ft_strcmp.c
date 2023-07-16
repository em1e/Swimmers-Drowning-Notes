/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 08:22:33 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/12 06:07:35 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main(void)
{
	char	test1 [] = "1234";
	char	test2 [] = "1234";
	char	test3 [] = "12345";
	char	test4 [] = "2134";
	char	test5 [] = " ";
	char	test6 [] = "ABSttgh";
	char	test7[] = "";
	char	test8[] = "";

	printf("comparing empty strings %i\n", ft_strcmp(test7, test8));
	printf("test1: %d \n", ft_strcmp(test1, test2));
	printf("test2: %d \n", ft_strcmp(test1, test3));
	printf("test3: %d \n", ft_strcmp(test1, test4));
	printf("test4: %d \n", ft_strcmp(test1, test5));
	printf("test5: %d \n", ft_strcmp(test1, test6));
	return (0);
}*/
