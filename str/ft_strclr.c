/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:00:08 by vroche            #+#    #+#             */
/*   Updated: 2014/11/10 15:23:32 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	while (len)
	{
		*s++ = '\0';
		len--;
	}
}
