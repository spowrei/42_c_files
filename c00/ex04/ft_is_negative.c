/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaplan <mkaplan2005@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:00:07 by mukaplan          #+#    #+#             */
/*   Updated: 2024/07/09 09:00:08 by mukaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	n_or_p;

	n_or_p = 'P';
	if (n < 0)
	{
		n_or_p = 'N';
	}
	write(1, &n_or_p, 1);
}
