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

void	transform(char *c, bool up)
{
	if (!to_upper)
	{
		if (*c >= 'A' && *c <= 'Z')
		{
			*c = *c + 32;
		}
	}
	else
	{
		if (*c >= 'a' && *c <= 'z')
		{
		*c = *c - 32;
		}
	}
}

bool	alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

bool	nbr(char c)
{
	return (c >= '0' && c <= '9');
}

void	decision(char *a, bool *in, bool *skip)
{
	bool	f;

	f = false;
	if (!*in)
	{
		if (nbr(*a))
			*skip = true;
		else if (alpha(*a) && !*skip)
		{
			*in = true;
			f = true;
		}
	}
	transform(a, false);
	if (*in)
		transform(a, f);
}

char	*ft_capitalize(char *str)
{
	int		index;
	char	*a;
	bool	in;
	bool	skip;

	ind = 0;
	in = false;
	skip = false;
	while (true)
	{
		a = &str[ind];
		if (*a == '\0')
			break ;
		decision(a, &in, &skip);
		if (!(alpha(*a) || alpha(*a)))
		{
			in = false;
			skip = false;
		}
		index++;
	}
	return (str);
}
