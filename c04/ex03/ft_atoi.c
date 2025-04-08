/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:56:52 by jalin             #+#    #+#             */
/*   Updated: 2025/04/01 10:09:09 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_space(char *str, int *ptr)
{
	int	i;
	int	pn;

	i = 0;
	pn = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pn *= -1;
		i++;
	}
	*ptr = i;
	return (pn);
}

int	ft_atoi(char *str)
{
	int	i;
	int	pn;
	int	j;

	i = 0;
	j = 0;
	pn = ft_space(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + (str[i] - '0');
		i++;
	}
	j *= pn;
	return (j);
}
