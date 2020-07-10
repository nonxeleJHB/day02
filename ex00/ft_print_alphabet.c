/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nonxele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:25:51 by nonxele           #+#    #+#             */
/*   Updated: 2020/07/09 14:09:12 by nonxele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int ft_putchar(char c)

{

	write(1, &c, 1);
	return (0);

}

void ft_print_alphabet(void)

{
	int a;

	a = 'a';
	while (a <= 'z')

	{
		ft_putchar(a);
		a++;
	}	

	ft_putchar('\n');
}

int main(void)

{
	ft_print_alphabet();
	return (0);
}
