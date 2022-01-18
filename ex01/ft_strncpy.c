/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:24:38 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/18 11:22:45 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	ind;

	ind = 0;
	while (str[ind] != '\0' && ind < n)
	{
		dest[ind] = str[ind];
		ind++;
	}
	while (ind < n)
	{
		dest[ind] = '\0';
		ind++;
	}
	return (dest);
}
