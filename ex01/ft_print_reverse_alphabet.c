/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nonxele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:45:50 by nonxele           #+#    #+#             */
/*   Updated: 2020/07/09 15:00:49 by nonxele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_putchar(char c)

{

	write(1, &c, 1);

}

void ft_print_reverse_alphabet(void)

{
	char a;

	a = 'z';
	while (a >= 'a')

	{
		ft_putchar(a);
		a--;
	}
}

int main(void)

{
	ft_print_reverse_alphabet();
	return(0);
}
