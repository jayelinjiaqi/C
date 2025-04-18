/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:29:23 by jalin             #+#    #+#             */
/*   Updated: 2025/04/07 12:03:53 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0 || nb == 2)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (i <= nb)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
