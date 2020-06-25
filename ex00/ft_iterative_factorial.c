/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 16:08:59 by klamola           #+#    #+#             */
/*   Updated: 2020/06/25 13:33:24 by klamola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int	nb)
{
	int		i;
	int		r;

	i = 1;
	r = 1;
	if(i<=0 || nb > 12)
	{
		return 0;

	while(i <= nb)
	{
		r = i*r;
		i++;
		return (r);
	}
	}
	else
	{
		return 1;
	}
}


