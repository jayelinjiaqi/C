/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:06:18 by jalin             #+#    #+#             */
/*   Updated: 2025/04/08 14:25:02 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;

	i = 0;
	if (min >= max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min));
	if (a == NULL)
		return (NULL);
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
	free (a);
}
