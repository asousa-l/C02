/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:44:18 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/18 11:44:56 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	ft_str_is_alpha(char *str)
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
		if (!(a >= 'a' && a <= 'z'))
		{
			alpha = false;
			break ;
		}
		ind++;
	}
	return (alpha);
}
