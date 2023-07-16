/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 05:31:58 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/12 06:24:05 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main(void)
{
	char	test1 [15] = "Hi there";
	char	test2 [] = "Hi there ";
	char	test3 [] = "Hi There";
	char	test4 [] = "";
	char	test5 [] = "";

	printf("test2: %d \n", ft_strncmp(test1, test2, 8));
	printf("test3: %d \n", ft_strncmp(test1, test3, 8));
	printf("test4: %d \n", ft_strncmp(test1, test4, 8));
	printf("test5: %d \n", ft_strncmp(test4, test5, 8));
	return (0);
}*/
