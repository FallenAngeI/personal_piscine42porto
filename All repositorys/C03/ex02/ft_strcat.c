/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:38:47 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/19 14:25:32 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0')
	{
		dest [i] = src [x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str1[123] = "fa";
	char	str2[123] = "cil";
	printf("Antes:%s\nAntes:%s\n",str1,str2);
	ft_strcat(str1, str2);

	printf("Depois: %s\n",str1);	
}*/
