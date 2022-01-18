/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:42:14 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/18 15:31:55 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	ind;

	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[ind] != '\0' && ind < (size - 1))
		{
			dest[ind] = src[ind];
			ind++;
		}
		dest[ind] = '\0';
	}
	return (count);
}
