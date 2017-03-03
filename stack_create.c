/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkosolap <dkosolap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 16:42:15 by dkosolap          #+#    #+#             */
/*   Updated: 2017/03/02 17:05:26 by dkosolap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_addb(t_stack **stk, int nbr)
{
	t_stack		*new;
	t_stack		*tmp;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->nbr = nbr;
	new->next = NULL;
	if (!(*stk))
		(*stk) = new;
	else
	{
		tmp = *stk;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

void	stack_del(t_stack **stk)
{
	t_stack		*tmp;

	if (!(*stk))
		return ;
	tmp = *stk;
	(*stk) = (*stk)->next;
	free(tmp);
}

int		stack_size(t_stack *stk)
{
	int			i;

	i = 0;
	if (stk == NULL)
		return (0);
	while (stk && ++i)
		stk = stk->next;
	return (i);
}

void	stack_print(t_stack *stk)
{
	int		i;
	int		len;

	i = -1;
	if (stk == NULL)
		return ;
	len = stack_size(stk);
	while (++i < 10)
		ft_printf(BYELLOW RED" #");
	ft_printf(" \n");
	while (stk)
	{
		ft_printf("\x1b[43m" RED " # ");
		ft_printf("\x1b[44m" WHITE "% 13d  ", stk->nbr);
		ft_printf("\x1b[43m" RED " # \n");
		stk = stk->next;
	}
	ft_printf("\x1b[43m" RED " # ");
	ft_printf(BBLACK MAGENTA "  TOTAL %5i  ", len);
	ft_printf("\x1b[43m" RED " # \n");
	i = -1;
	while (++i < 10)
		ft_printf(BYELLOW RED" #");
	ft_printf(" \n");
	ft_printf(RESET);
}
