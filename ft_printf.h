/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:32:32 by laugusto          #+#    #+#             */
/*   Updated: 2024/11/10 21:36:44 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

ssize_t	anchor(va_list args, char format);
ssize_t	ft_putchar(char c);
ssize_t ft_putstr(char *str);

#endif