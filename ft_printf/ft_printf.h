/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omel-kih <omel-kih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:22:27 by omel-kih          #+#    #+#             */
/*   Updated: 2026/11/04 19:22:20 by omel-kih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

typedef struct s_data
{
	int	s;
	int	i;
}		t_data;

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, t_data *data);
void	ft_classm(const char *format, t_data *data, va_list *arg);
void	ft_putstr(char *s, t_data *data);
void	ft_putnbr(int n, t_data *data);
void	ft_puthex(unsigned int n, t_data *data, char *base);
void	ft_putpointer(void *ptr, t_data *data);
void	ft_putunbr(unsigned int n, t_data *data);
void	ft_printrev(char *buf, t_data *data, int i);

#endif
