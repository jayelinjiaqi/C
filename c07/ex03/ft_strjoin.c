/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:44:43 by jalin             #+#    #+#             */
/*   Updated: 2025/04/08 14:48:17 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	calculate_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		total_len += ft_strlen(sep);
		i++;
	}
	return (total_len);
}

void	copy_string_to_result(char *str, char *result, int *k)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		result[*k] = str[j];
		(*k)++;
		j++;
	}
}

void	copy_separator_to_result(char *sep, char *result, int *k)
{
	int	j;

	j = 0;
	while (sep[j] != '\0')
	{
		result[*k] = sep[j];
		(*k)++;
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*result;
	int		total_len;

	i = 0;
	k = 0;
	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	total_len = calculate_total_len(size, strs, sep);
	result = malloc(sizeof(char) * (total_len + 1));
	while (i < size)
	{
		copy_string_to_result(strs[i], result, &k);
		if (i < size - 1)
			copy_separator_to_result(sep, result, &k);
		i++;
	}
	result[k] = '\0';
	return (result);
}
