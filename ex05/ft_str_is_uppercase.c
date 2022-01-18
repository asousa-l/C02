/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:45:59 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/18 12:05:46 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	ft_str_is_uppercase(char *str)
{
	int		ind;
	bool	alpha;
	char	a;

	ind = 0;
	alpha = true;
	while (true)
	{
		a = str[ind];
		if (curr == '\0')
		{
			break ;
		}
		if (!(a >= 'A' && a <= 'Z'))
		{
			alpha = false;
			break ;
		}
		index++;
	}
	return (alpha);
}
