/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:46:29 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/18 11:24:27 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
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
		if (a == '\0')
		{
			break ;
		}
		if (!((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')))
		{
			alpha = false;
			break ;
		}
		ind++;
	}
	return (alpha);
}
