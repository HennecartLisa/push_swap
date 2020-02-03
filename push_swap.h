/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viforget <viforget@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:14:25 by viforget          #+#    #+#             */
/*   Updated: 2020/02/03 17:11:43 by lhenneca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
**	INCLUDE
*/

# include "libft/libft.h"
# include <stdarg.h>
# include <limits.h>

int		len(int *tab);
int		swap(int *tab, int len);
int		push(int *a, int *b, int lena, int lenb);
int		rot(int *a, int len);
int		rot_rev(int *a, int len);

int 	*tris_bulle(int *tab, int len);
#endif
