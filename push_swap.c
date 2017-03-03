/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkosolap <dkosolap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 17:18:15 by dkosolap          #+#    #+#             */
/*   Updated: 2017/03/02 17:33:49 by dkosolap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		parsing(char **arg)
{
	int				len;
	int				i;
	long int		nbr;
	t_stack			*a;

	a = NULL;
	len = ft_arrlen((void **)arg);
	i = -1;
	while (++i < len)
	{
		if ((arg[i][0] < '0' && arg[i][0] > '9') && arg[i][0] != '-')
			return (0);
		nbr = ft_atoi_long(arg[i]);
		if (nbr > 2147483647 || nbr < -2147483648)
			return (0);
		stack_addb(&a, ft_atoi_long(arg[i]));
	}
	stack_print(a);
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		(void)argv;
	if (!parsing(argv + 1))
		ft_printf("error\n");
	return (0);
}
