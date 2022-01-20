/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:11:47 by jnoh              #+#    #+#             */
/*   Updated: 2022/01/17 17:12:25 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src);
#include <stdio.h>

int main(void)
{
   char *string = "this is a copy";
   char *newstr;
   /* Make newstr point to a duplicate of string                              */
   if ((newstr = ft_strdup(string)) != NULL)
      printf("The new string is: %s\n", newstr);
   return 0;
}
