/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:26:33 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/14 17:47:54 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (s1[i] != s2[i] && i < n)
	{
		return ((unsigned int)s1[i] - (unsigned int)s2[i]);
	}
	else
		return (0);
}

/*int	main(void)
{
	char	str1[] = "code2";
	char	str2[] = "code";
	printf("%d\n",ft_strncmp(str1, str2, 4));	
}*/
