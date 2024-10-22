/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:58:23 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/26 17:07:39 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*result;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	result = (int *) malloc(sizeof(int) * size);
	if (!result)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	*range = result;
	return (size);
}

/*#include <stdio.h>
int main() {
    int *range;
    int size = ft_ultimate_range(&range, 5, 10);

    if (size != -1) {
        for (int i = 0; i < size; i++) {
            printf("%d ", range[i]);
        }
        free(range);
    } else {
        printf("Range is NULL or failed to allocate memory.\n");
    }

    return 0;
}*/