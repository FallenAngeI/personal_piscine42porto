/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:57:31 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/09 15:59:47 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	notpositive;

	positive = 'P';
	notpositive = 'N';
	if (n >= 0)
	{
		write (1, &positive, 1);
	}
	else
	{
		write (1, &notpositive, 1);
	}
}
int main()
{
    ft_is_negative();
    return(0);
}