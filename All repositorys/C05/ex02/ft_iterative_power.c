/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:28:10 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/24 14:26:34 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power) //2^8 -> 2*2*2*2*2*2*2*2
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (0 == power)
		return (1);
	while (power > 0)
	{
		result *= nb;
		--power;
	}
	return (result);
}

/*int	main(void)
{
	for (int i = -5; i < 20; i++)
		printf("%d^%d = %d\n", 2,i,ft_iterative_power(2, i));
}*/