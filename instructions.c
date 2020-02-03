/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenneca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:08:15 by lhenneca          #+#    #+#             */
/*   Updated: 2020/02/03 15:57:23 by lhenneca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		len(int *tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int		swap(int *tab, int len)
{
	int		temp;

	if (len < 2)
		return (-1);
	temp = tab[len];
	tab[len] = tab[len -1];
	tab[len - 1] = temp;
	return (0);
}

int		push(int *a, int *b, int lena, int lenb)
{
	a[lena] = b[lenb - 1];
	b[lenb - 1] = '\0';
	return (0);
}

int		rot(int *a, int len)
{
	int		i;
	int		temp;

	i = 0;
	temp = a[i];
	while (i < len - 2)
	{
		i++;
		a[i] = a[i + 1];
	}
	a[i] = temp;
	return (0);
}


int		rot_rev(int *a, int len)
{
	int		i;
	int		temp;

	i = len - 1;
	temp = a[i];
	while (i > 1)
	{
		i--;
		a[i] = a[i - 1];
	}
	a[i] = temp;
	return (0);
}
