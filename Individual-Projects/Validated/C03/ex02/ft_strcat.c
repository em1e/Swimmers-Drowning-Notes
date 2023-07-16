/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:56:29 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/11 16:33:31 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char	test1 [50] = "Hi there, ";
	char	test2 [] = "user! ";
	char	test3 [] = "Erilerial";
	char	test4 [] = " 1 /w1@$}255";
	char	test5 [] = "23345";

	printf("test2: %s \n", ft_strcat(test1, test2));
	printf("test3: %s \n", ft_strcat(test1, test3));
	printf("test4: %s \n", ft_strcat(test1, test4));
	printf("test5: %s \n", ft_strcat(test1, test5));
	return (0);
}*/
