/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:28:06 by laugusto          #+#    #+#             */
/*   Updated: 2024/11/10 21:39:43 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	anchor(va_list args, char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	ssize_t	len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += anchor(args, *format);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	char *name = "Lucas";
	char *study = "42Rio";
	ft_printf("MY Name: %s\nMy campus: %s\n", name, study);
}