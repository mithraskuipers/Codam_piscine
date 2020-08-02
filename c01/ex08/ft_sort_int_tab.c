/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/13 16:20:47 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/13 16:21:01 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		temp;
	int		count;
	int		pos;

	count = 0;
	while (count < size)
	{
		pos = 0;
		while (pos < (size - 1))
		{
			if (tab[pos] > tab[pos + 1])
			{
				temp = tab[pos];
				tab[pos] = tab[pos + 1];
				tab[pos + 1] = temp;
			}
			pos++;
		}
		count++;
	}
}
