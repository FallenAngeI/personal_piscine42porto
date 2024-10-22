/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:05:37 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/24 14:28:16 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (0 == power)
		return (1);
	else
	{
		nb = nb * ft_recursive_power(nb, power -1);
	}
	return (nb);
}

/*int	main(void)
{
	for (int i = -5; i < 20; i++)
		printf("%d^%d = %d\n", 2,i,ft_iterative_power(2, i));
}*/