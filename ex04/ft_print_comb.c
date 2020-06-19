/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nddlamin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:07:04 by nddlamin          #+#    #+#             */
/*   Updated: 2020/06/19 15:28:02 by nddlamin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_comb(void)
 {
    char a,r;
 	 int x, y,z;
	x = '0';
		x ='0' - 1;
	while(++x <= '9'){
		y = x;
		while( ++y <= '9')
		{
			z = y;
			while(++z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
                 
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

