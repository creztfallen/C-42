/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreno <mtssmoreno@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:03:23 by graitz-j          #+#    #+#             */
/*   Updated: 2022/02/08 19:53:34 by mmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void rush(int x, int y)
{
    int co;
    int li;

    li = 1;
    while (li <= y && x > 0 && x < 2147483647)
    {
        co = 1;
        while (co <= x)
        {
            if ((co == 1 && li == 1) || (co == 1 && li == y))
                ft_putchar('A');
            else if ((co == x && li == 1) || (co == x && li == y))
                ft_putchar('C');
            else if ((co == 1) || (co == x) || (li == 1) || (li == y))
                ft_putchar('B');
            else
                ft_putchar(' ');
            co++;
        }
        ft_putchar('\n');
        li++;
    }
}

/* 

******************************rush00********************************* 

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	co;
	int	li;

	li = 1;
	while (li <= y && x > 0)
	{
		co = 1;
		while (co <= x)
		{
			if ((co != 1 && co != x) && (li == 1 || li == y))
				ft_putchar('-');
			else if ((li != 1 && li != y) && (co == 1 || co == x))
				ft_putchar('|');
			else if ((co == 1) || (co == x) || (li == 1) || (li == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			co++;
		}
		ft_putchar('\n');
		li++;
	}
}	
	
******************************rush004*********************************

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	p;
	int	r;

	r = 1;
	while (r <= y && x > 0)
	{
		p = 1;
		while (p <= x)
		{
			if ((p == 1 && r == 1) || (p == x && r == y && p != 1 && r != 1))
				ft_putchar('A');
			else if ((p == x && r == 1) || (p == 1 && r == y))
				ft_putchar('C');
			else if ((p == 1) || (p == x) || (r == 1) || (r == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			p++;
		}
		ft_putchar('\n');
		r++;
	}
}

*/