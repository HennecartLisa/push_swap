/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenneca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:07:56 by lhenneca          #+#    #+#             */
/*   Updated: 2020/02/03 16:57:04 by lhenneca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int 	*tris_bulle(int *tab, int len)
{
	int		i;
	int		j;
	int		temp;
	int		*arr;

	i = 0;
	arr = malloc(len * sizeof(int));
	temp = tab[i];
	while (i <= len)
	{
		j = i + 1;
		while (j <= len)
		{
			if (tab[j] < temp)
				temp = tab[j];
			j++;
		}
		arr[i] = temp;
		i++;
	}
	return (arr);
}

char	*rra(int **tab, int len)
{
	rot_rev(*tab, len);
	return ("rra");
}

char	*ra(int **tab, int len)
{
	rot(*tab, len);
	return ("ra");
}

char	*rrb(int **tab, int len)
{
	rot_rev(*tab, len);
	return ("rrb");
}

char	*rb(int **tab, int len)
{
	rot_rev(*tab, len);
	return ("rb");
}

char	*sa(int **tab, int len)
{
	swap(*tab, len);
	return ("sa");
}

char	*sb(int **tab, int len)
{
	swap(*tab, len);
	return ("sb");
}
//len = max index value possible
int		max(int *tab, int len)
{
	int		n;

	n = tab[len];
	while (len > 0)
	{
		len--;
		if (n < tab[len])
			n = tab[len];
	}
	return (n);
}


//len = max index value possible
int		min(int *tab, int len)
{
	int		n;

	n = tab[len];
	while (len > 0)
	{
		len--;
		if (n > tab[len])
			n = tab[len];
	}
	return (n);
}


int		stack_a(int **tab, int len)
{
	if (len < 1)
		return (0);
	if (*tab[len] == max(*tab, len))
		ft_putendl(rra(tab, len));
	if (*tab[len] > *tab[len - 1] || *tab[len] > *tab[0])
	{
		if (*tab[len] > *tab[0])
			ft_putendl(rra(tab, len));
		else
			ft_putendl(sa(tab, len));
	}

	return (0);
}

//len = max index value possible
int		tri(int **a, int **b, int len)
{
	int		i;
	int		lena;
	int		lenb;

	i = len - 1;
	lena = len - 1;
	lenb = 0;

	while (i < len)
	{
		while (lena >= 1)
		{
			if (*a[lena] > *a[lena - 1])
			{
				swap(*a, lena);
				write(1,"sa\n", 3);
				lenb++;
			}
			if (*a[lena] < *b[lenb])
			{

			}
			if (lenb > 0 && *b[lenb] < *b[lenb - 1])
			{
				swap(*b, lenb);
				write(1,"sa\n", 3);
			}
			push(*a, *b, lena, lenb);
			write(1,"pb\n", 3);
			lena--;
		}
	}
	return (i);
}
