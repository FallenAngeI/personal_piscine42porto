/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:53:48 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/10 15:06:45 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	if (tab != 00)
	{
		while (i < size / 2)
		{
			temp = tab[i];
			tab[i] = tab[size - 1 - i];
			tab[size - 1 - i] = temp;
			i++;
		}
	}
}
