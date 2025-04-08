/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:22:44 by jalin             #+#    #+#             */
/*   Updated: 2025/04/02 11:39:21 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	j;

	if (argc > 1)
	{
		while (argc > 1)
		{
			j = 0;
			while (argv[argc - 1][j] != '\0')
			{
				ft_putchar(argv[argc -1][j]);
				j++;
			}
			argc--;
			ft_putchar('\n');
		}
	}
	return (0);
}
