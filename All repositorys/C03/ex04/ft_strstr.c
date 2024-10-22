/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:00:01 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/19 14:03:26 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char	str[30] = "Coding test super easy facil";
	char	to_find[22] = "super";
	printf("Antes string: %s\n",str);
	printf("Antes to_find: %s\n",to_find);
	printf("Resultado:%s\n",ft_strstr(str,to_find));
}*/
