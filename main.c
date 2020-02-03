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
	if (error)
		return (1);

	return (0);
}

int error(void)
{
	ft_putendl("Error");
	return (1);
}

int		order(int *a, int len)
{
	int		i;
	int		j;

	i = len - 1;
	while (i >= 0)
	{
		j = i - 1;
		while (i >= 0 && i != j && a[j + 1] < a[j])
		{
			if (i == 0)
				i = len;
			i--;
		}
		if (i == j)
			return (i);
	}
	return (-1);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		*a;
	int		*b;

	i = 0;
	if (argc < 2)
		return (error());
	a = ft_memalloc(argc * sizeof(int));
	if (ft_read(argc, argv, a) == 1)
		return (error());
	b = ft_memalloc(argc * sizeof(int));
	b = tris_bulle(a, len(a));
	while (*b)
	{
		ft_putnbr(*b);
		ft_putendl("");
		b++;
	}
	return (0);
}
