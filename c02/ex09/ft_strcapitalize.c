/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:03:34 by jalin             #+#    #+#             */
/*   Updated: 2025/03/27 16:15:03 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	cap(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	decap(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = cap(str[i]);
	i++;
	while (str[i] != '\0')
	{
		if ((str[i - 1] >= 32 && str[i - 1] <= 47)
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = cap(str[i]);
		else if (str[i - 1] != ' ' && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = decap(str[i]);
		i++;
	}
	return (str);
}
