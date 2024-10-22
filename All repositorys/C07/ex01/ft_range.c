/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:00:20 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/26 15:46:43 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*result;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	result = (int *) malloc(sizeof(int) * size);
	if (!result)
		return (NULL);
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
/*int main() {
    int *range = ft_range(5, 10);
    if (range) {
        for (int i = 0; i < 10 - 5; i++) {
            printf("%d ", range[i]);
        }
        free(range);
    }
    return 0;
}*/