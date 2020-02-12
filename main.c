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

int		*ft_nbrcpy(int *dst, int *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

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

int		ft_read(int argc, char *argv[], t_pile a)
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
			ft_isin(a.tab, nb, i ) ? (error = 1) : (a.tab[i - 1] = nb);
		else
			error = 1;
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

int		main(int argc, char *argv[])
{
	int		i;
	t_pile	a;
	t_pile	b;

	i = 0;
	if (argc < 2)
		return (error());
	a.tab = ft_memalloc(argc * sizeof(int));
	if (ft_read(argc, argv, a) == 1)
		return (error());
	b.tab = ft_memalloc(argc * sizeof(int));
	a.len = len(a.tab);
	/*
	b.tab = ft_nbrcpy(b.tab, a.tab, argc - 1);
	ft_putendl("Tris a bulle ");
	tris_bulle(a.tab, b.tab, a.len);
	i = 0;
	while (i < argc - 1)
	{
		ft_putnbr(b.tab[i]);
		ft_putendl(" ");
		i++;
	}
	*/
	return (0);
}
