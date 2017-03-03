/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkosolap <dkosolap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 17:19:33 by dkosolap          #+#    #+#             */
/*   Updated: 2017/03/02 17:20:50 by dkosolap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PUSH_SWAP_H
# define __PUSH_SWAP_H
# define BLACK   "\x1b[30m"
# define WHITE   "\x1b[37m"
# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
# define BBLACK  "\x1b[40m"
# define BRED    "\x1b[41m"
# define BYELLOW "\x1b[43m"
# define BBLUE   "\x1b[44m"
# define RESET   "\x1b[0m"
# include "ft_printf.h"
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_stack
{
	int				nbr;
	struct s_stack	*next;
}					t_stack;

long int			ft_atoi_long(const char *str);

void				stack_addb(t_stack **stk, int nbr);
void				stack_del(t_stack **stk);
int					stack_size(t_stack *stk);
void				stack_print(t_stack *stk);

#endif
