/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/11 15:57:33 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/11 16:19:43 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_it(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	char	left_int[2];
	char	right_int[2];
	int		num1;
	int		num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = 1;
		while (num2 <= 99)
		{
			num2 = num2 <= num1 ? num1 + 1 : num2;
			left_int[0] = (num1 / 10) + 48;
			left_int[1] = num1 < 10 ? (num1 + 48) : ((num1 % 10) + 48);
			right_int[0] = (num2 / 10) + 48;
			right_int[1] = num2 < 10 ? (num2 + 48) : ((num2 % 10) + 48);
			print_it(left_int[0], left_int[1], right_int[0], right_int[1]);
			if (num1 != 98)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}
