/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenneca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:05:21 by lhenneca          #+#    #+#             */
/*   Updated: 2020/02/03 17:11:42 by lhenneca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int 	is_ord(t_pile p)
{
	int 	ord;
	size_t 	i;

	ord = 1;
	i = 1;
	while (ord && i < p.len)
		(p.tab[i - 1] < p.tab[i]) ? (i++) : (ord--);
	return (ord);
}

int		main(int argc, char *argv[])
{
	int		i;
	t_pile	a;
	t_pile	b;

	i = 0;
	if (argc < 2)
		return (error());
	init_stack(&a, argc, argv);
	init_stack(&b, argc, NULL);
	if (is_ord(a))
		ft_putendl("is ord");
	i = 0;
	while (i < argc - 1)
	{
		ft_putnbr(a.tab[i]);
		ft_putendl(" ");
		i++;
	}
	
	return (0);
}
