/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:20:39 by emok              #+#    #+#             */
/*   Updated: 2023/11/22 17:20:41 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int			is_element(char c);
int			print_stack(int i, char *stack, int *error, int *ag_cnt);
int			error_check(int return_value, int *flag);
void		not_plus_case(int check, int *i_tmp, int *error, int *ag_cnt);
void		print_char(va_list tartget, int *ag_cnt, int *error);
void		print_str(va_list target, int *ag_cnt, int *error);
void		print_ptr(va_list target, int *ag_cnt, int *error);
void		print_int(va_list target, int *ag_cnt, int *error);
void		print_unint(va_list target, int *ag_cnt, int *error);
void		print_x(va_list target, int size, int *ag_cnt, int *error);
void		print_per(int *ag_cnt, int *error);
int			print_element(char elm, va_list target, int *ag_cnt, int *error);
int			ft_get_element(char *str, int *index, va_list target, int *ag_cnt);
int			ft_printf(const char *main_str, ...);

#endif
