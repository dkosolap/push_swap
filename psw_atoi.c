/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psw_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkosolap <dkosolap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 17:18:32 by dkosolap          #+#    #+#             */
/*   Updated: 2017/03/02 17:26:29 by dkosolap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define S str[i] ==

long int			ft_atoi_long(const char *str)
{
	int			i;
	long int	res;
	long int	neg;

	i = 0;
	neg = 1;
	res = 0;
	while ((S '\t') || (S '\v') || (S '\f') || (S '\r') || (S '\n') || (S ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i] == '-' && ++i)
			neg = -1;
	while (str[i] > 47 && str[i] < 58)
	{
		res = res * 10;
		res += (str[i] - 48);
		i++;
	}
	return (res * neg);
}