/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:28:57 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/19 20:09:36 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex_1(unsigned long int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[n / 16]);
	ft_putchar(hex[n / 16]);
}

void	hex_2(unsigned char *str, unsigned int x)
{
	unsigned int	a;
	char			*hex;

	a = 0;
	hex = "0123456789abcdef";
	while (a < 16 && str[a + x])
	{
		ft_putchar(hex[str[a + x] / 16]);
		ft_putchar(hex[str[a + x] % 16]);
		if (a % 2 == 1)
			write(1, " ", 1);
		a++;
	}
	while (a <= 16)
	{
		if (a % 2 == 0)
			write(1, "  ", 2);
		else
			write(1, "  ", 3);
		a++;
	}
}

void	str(unsigned char *str, unsigned int x)
{
	unsigned int	a;

	a = 0;
	while (a < 16 && str[a + x])
	{
		if (str[a + x] < 32 || str[a + x] > 126)
		{
			ft_putchar('.');
			a++;
		}
		else
		{
			ft_putchar(&str[a + x]);
			a++;
		}
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	a;
	int				b;

	if (size == 0)
		return (0);
	a = 0;
	while (a < size)
	{
		b = 8;
		while (--b >= 0)
			hex_1((unsigned long int)(addr + a) >> b * 8 & 0xff);
		write(1, ": ", 2);
		if (a % 16 == 0)
			hex_2((unsigned char *)addr, a);
		if (a % 16 == 0)
			str((unsigned char *)addr, a);
		a += 16;
	}
	return (addr);
}
