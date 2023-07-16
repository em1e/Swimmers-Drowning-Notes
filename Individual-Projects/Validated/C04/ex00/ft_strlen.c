/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:14:58 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/12 08:37:02 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
    char *str = "Cats are fluffy";

    int length = ft_strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}*/
