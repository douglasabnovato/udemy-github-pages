/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doantoni <doantoni@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 01:58:25 by mdouglas          #+#    #+#             */
/*   Updated: 2022/02/09 13:25:20 by doantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	r;

	c = 1;
	r = 1;
	while (r <= y)
	{
		while (c <= x)
		{
			if ((r == 1 && c == 1) || (r == y && c == 1))
				ft_putchar('A');
			else if ((r == 1 && c == x) || (r == y && c == x))
				ft_putchar('C');
			else if ((c >= 1 && (r == 1 || r == y)) || (c == 1 || c == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		c = 1;
		r++;
	}
}
