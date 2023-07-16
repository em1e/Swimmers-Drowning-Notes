/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:57:03 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/11 16:33:11 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((j < nb) && (src[j] != '\0'))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	test1 [50] = "Hi there, ";
	char	test2 [] = "user! ";
	char	test3 [] = "Erilerial";
	char	test4 [] = " 1 /w1@$}255";
	char	test5 [] = "23345";

	printf("test2: %s \n", ft_strncat(test1, test2, 0));
	printf("test3: %s \n", ft_strncat(test1, test3, 23));
	printf("test4: %s \n", ft_strncat(test1, test4, 27));
	printf("test5: %s \n", ft_strncat(test1, test5, 33));
	return (0);
}*/
