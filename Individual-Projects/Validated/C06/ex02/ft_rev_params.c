/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:00:45 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/12 17:02:00 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	fnum;

	fnum = argc -1;
	i = 0;
	if (argc > 0)
	{
		while (fnum > 0)
		{
			while (argv[fnum][i] != '\0')
			{
				ft_putchar(argv[fnum][i]);
				i++;
			}
			ft_putchar('\n');
			fnum--;
			i = 0;
		}
	}
	return (0);
}
