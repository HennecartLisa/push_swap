#include "push_swap.h"


int error(void)
{
	ft_putendl("Error");
	return (1);
}

/*
 * return 1 in case of error allocating
 */
int 	init_stack(t_pile *p, size_t len, char *argv[])
{
	size_t 	i;
	if (!(p->tab = ft_memalloc(len * sizeof(int))))
		return (1);
	len--;
	if (argv != NULL)
	{
		p->len = len - 1;
		if (ft_read(argv, p) == 1)
			return (error());
		p->min = p->tab[0];
		p->max = p->tab[0];
		i = 1;
		while(i < len)
		{
			if (p->tab[i] > p->max)
				p->max = p->tab[i];
			if (p->tab[i] < p->min)
				p->min = p->tab[i];	
			i++;	
		}
	}
	else
		p->len = 0;
	return (0);
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

int		ft_read(char *argv[], t_pile *a)
{
	size_t		i;
	int		error;
	int		nb;

	i = 0;
	error = 0;
	while (!error && i <= a->len)
	{
		nb = ft_atoi(argv[i + 1]);
		if (ft_is_number(argv[i + 1]))
			ft_isin(a->tab, nb, i + 1 ) ? (error = 1) : (a->tab[i] = nb);
		else
			error = 1;
		i++;
	}
	if (error)
		return (1);

	return (0);
}