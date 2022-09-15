/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:48:00 by pharbst           #+#    #+#             */
/*   Updated: 2022/07/01 03:00:03 by pharbst          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftio.h>

t_buff	ft_printx(unsigned long nbr, t_buff buff)
{
	buff.jstr = ft_itohex(nbr);
	buff.jlen = ft_strlen(buff.jstr);
	return (buff);
}

t_buff	ft_printux(unsigned long nbr, t_buff buff)
{
	buff.jstr = ft_strupper(ft_itohex(nbr));
	buff.jlen = ft_strlen(buff.jstr);
	return (buff);
}

t_buff	ft_parameter_parsing(va_list args, const char *format, t_buff buff)
{
	if (*format == '%')
		return (ft_printc('%', buff));
	if (*format == 'c')
		return (ft_printc((va_arg(args, int)), buff));
	if (*format == 's')
		return (ft_prints((va_arg(args, char *)), buff));
	if (*format == 'd' || *format == 'i')
		return (ft_printi((va_arg(args, int)), buff));
	if (*format == 'u')
		return (ft_printu((va_arg(args, unsigned int)), buff));
	if (*format == 'p')
		return (ft_printp((unsigned long)(va_arg(args, void *)), buff));
	if (*format == 'x')
		return (ft_printx((va_arg(args, unsigned int)), buff));
	if (*format == 'X')
		return (ft_printux((va_arg(args, unsigned int)), buff));
	exit(0);
}

t_buff	ft_printf_mid(t_buff buff, va_list args, const char *format)
{
	while (*format)
	{
		if (*format == '%' && format[1] != '\0'
			&& ft_strchr("%xXuidpcs", format[1]))
		{
			format++;
			buff = ft_parameter_parsing(args, format, buff);
			buff = ft_bufferjoin(buff);
		}
		else if (*format != '%')
		{
			buff.jstr = ft_chartostr(*format);
			buff = ft_bufferjoin(buff);
		}
		format++;
	}
	return (buff);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	t_buff	buff;

	if (*format == '\0')
		return (0);
	buff = ft_buffinit();
	va_start(args, format);
	buff = ft_printf_mid(buff, args, format);
	va_end(args);
	write(1, buff.buffer, buff.len);
	return (free(buff.buffer), buff.len);
}
