/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:02:38 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/18 13:06:25 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_lowcase(char *str)
{
	int		ind;
	char	a;

	ind = 0;
	while (true)
	{
		a = str[ind];
		if (curr == '\0')
		{
			break ;
		}
		if (a >= 'A' && a <= 'Z')
		{
			str[ind] = a + 32;
		}
		ind++;
	}
	return (str);
}
