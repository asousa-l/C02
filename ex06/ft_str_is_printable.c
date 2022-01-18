/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:09:06 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/18 12:17:34 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
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
		if (!(a >= ' ' && a <= 127))
		{
			alpha = false;
			break ;
		}
		ind++;
	}
	return (alpha);
}
