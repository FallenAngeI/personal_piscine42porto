/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:10:36 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/10 15:56:31 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	backup;

	i = 0;
	while ((i + 1) < size)
	{
		if (tab[i] > tab[i + 1])
		{
			backup = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = backup;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
