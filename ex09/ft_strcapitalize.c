/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:07:55 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/18 13:54:04 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int	up;

	i = 0;
	up = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 0 && str[i] <= '9'))
		{
			if (up && (str[i] >= 'a' && str[i] < 'z'))
				str[i] = (str[i] - 32);
			else if (!up && (str[i] >= 'a' && str[i] < 'z'))
				str[i] = (str[i] + 32);
			up = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);
}
