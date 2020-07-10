/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nonxele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:01:00 by nonxele           #+#    #+#             */
/*   Updated: 2020/07/10 09:43:17 by nonxele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_putchar(char c)

{
	write(1, &c, 1);
}

void ft_is_negative(int n)

{
	if (n < 0)
	{
		ft_putchar ('N');
	}
	 else if ( n > 0)
	 {
	 	ft_putchar ('P');
	 }

}

int main(void)
{
	int n;
	n= -15;
	ft_is_negative(n);
	return(0);
}
