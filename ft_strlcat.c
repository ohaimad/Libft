/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:42:18 by ohaimad           #+#    #+#             */
/*   Updated: 2022/10/19 20:48:46 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	len_d;
	size_t	len_s;

	x = 0;
	len_s = ft_strlen(src);
	if (!dest && size == 0)
		return (len_s);
	len_d = ft_strlen(dest);
	y = len_d;
	if (size == 0 || size <= len_d)
		return (len_s + size);
	while (src[x] != '\0' && x < size - len_d - 1)
	{
		dest[y] = src[x];
		x++;
		y++;
	}
	dest[y] = '\0';
	return (len_d + len_s);
}

// int main()
// {
// 	//  char dest[20] = "12345";
// 	char *src = "4585";
// 	// char dest1[20] = "12345";
// 	printf("%zu -----\n", ft_strlcat(NULL, src, 0));
// 	// printf("%zu -----", strlcat(0, src, 0));
// }
