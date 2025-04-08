/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:29:16 by jalin             #+#    #+#             */
/*   Updated: 2025/04/07 12:07:57 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	next;

	i = 2;
	next = nb + 1;
	if (nb <= 2)
		return (2);
	while (i < next)
	{
		if (next % i == 0)
			next++;
		return (next);
	}
	return (1);
}
