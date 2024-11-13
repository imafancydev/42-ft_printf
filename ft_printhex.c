/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:01:06 by laugusto          #+#    #+#             */
/*   Updated: 2024/11/13 00:01:59 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbr(int num)
{
	ssize_t	length;

	length = 0;
	if (num == -2147483648)
	{
		length += ft_putstr("-2147483648");
	}
	else if (num < 0)
	{
		length += ft_putchar('-');
		length += ft_putnbr(-num);
	}
	else if (num > 9)
	{
		length += ft_putnbr(num / 10);
		length += ft_putchar('0' + num % 10);
	}
	else
	{
		length += ft_putchar('0' + num);
	}
	return (length);
}

ssize_t	ft_putunbr(unsigned int num)
{
	ssize_t	length;

	length = 0;
	if (num > 9)
	{
		length += ft_putunbr(num / 10);
		length += ft_putchar('0' + num % 10);
	}
	else
	{
		length += ft_putchar('0' + num);
	}
	return (length);
}

ssize_t	ft_puthex(unsigned long long num, char format)
{
	ssize_t	length;
	char	*base;

	length = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num >= 16)
	{
		length += ft_puthex(num / 16, format);
		length += ft_puthex(num % 16, format);
	}
	else
	{
		length += ft_putchar(base[num]);
	}
	return (length);
}

ssize_t	ft_putptr(void *ptr)
{
	ssize_t	length;

	length = 0;
	length += ft_putstr("0x");
	length += ft_puthex((unsigned long long)ptr, 'x');
	return (length);
}
