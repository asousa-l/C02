/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:54:45 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/18 11:25:34 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_str_is_numeric(char *str)
{
	int		ind;
	bool	nbr;
	char	a;

	ind = 0;
	nbr = true;
	while (true)
	{
		a = str[ind];
		if (curr == '\0')
		{
			break ;
		}
		if (!(a >= '0' && a <= '9'))
		{
			nbr = false;
			break ;
		}
		ind++;
	}
}
