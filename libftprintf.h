/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noloupe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:14:36 by noloupe           #+#    #+#             */
/*   Updated: 2022/10/23 11:47:55 by noloupe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_print_c(int c);
int		ft_print_s(char *str);
int		ft_print_p(void *ptr);
int		ft_print_d(int nb);
int		ft_print_i(int nb);
int		ft_print_u(unsigned int nb);
int		ft_print_x(int nb);
int		ft_print_caps_x(int nb);
int		ft_print_percent(void);
int		ft_print_error(void);
void	ft_putptr(unsigned long int nbr, char *base, int *count);
void	ft_putnbr_base(int nbr, char *base, int *count);
void	ft_putunsignednbr_base(unsigned int nbr, char *base, int *count);
int		ft_strlen(char *str);

#endif
