/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenneca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:05:21 by lhenneca          #+#    #+#             */
/*   Updated: 2020/01/11 16:08:54 by lhenneca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * 1 if digit
 * 0 if not
 */
int		ft_is_number(char *n)
{
	int		i;

	i = 0;
	while (n[i] != '\0' && ft_isdigit(n[i]))
		i++;
	if (n[i] == '\0')
		return (1);
	return (0);
}

int		ft_isin(int *a, int n, int i)
{
	while (i > 0)
	{
		i--;
		if (a[i] == n)
			return (1);
	}
	return (0);
}

int		ft_read(int argc, char *argv[], int *a)
{
	int		i;
	int		error;
	int		nb;

	i = 1;
	error = 0;
	while (!error && i < argc)
	{
		nb = ft_atoi(argv[i]);
		if (ft_is_number(argv[i]))
			ft_isin(a, nb, i ) ? (error = 1) : (a[i] = nb);
		else
			(error = 1);
		
		if (!error)
		{
			ft_putnbr(a[i]);
			ft_putendl("");
		}
		i++;
	}

	return (0);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		*a;
//	int		*b;
//	int		*op;

	i = 0;
	if (argc < 2)
	{
		ft_putendl("ERROR");
		return (0);
	}
	a = ft_memalloc(argc * sizeof(int));
	ft_read(argc, argv, a);
//	b = ft_memmalloc(argc * sizeof(int));
//
	return (0);
}
