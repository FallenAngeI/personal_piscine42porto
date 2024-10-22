/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:51:18 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/18 14:12:33 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int unsigned	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0' && x < nb)
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
	char	str1[123] = "codigofacil";
	char	str2[123] = "demais";
	printf("Antes:%s\nAntes:%s\n",str1,str2);
	ft_strncat(str1, str2, 6);

	printf("Depois:%s\n",str1);	
}*/
