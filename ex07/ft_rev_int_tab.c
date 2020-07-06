/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 09:12:53 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/06 10:51:55 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int mid;
	int i;

	i = -1;
	mid = size / 2;
	if (size % 2 == 0)
	{
		mid--;
		while (i++ < mid)
			ft_swap(&tab[mid - i], &tab[mid + i + 1]);
	}
	else
	{
		while (i++ < mid)
			ft_swap(&tab[mid - i], &tab[mid + i]);
	}
}
