/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 09:53:45 by atourret          #+#    #+#             */
/*   Updated: 2021/01/18 13:07:56 by atourret         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "incs/ft_printf.h"
#include <limits.h>


int main ()
{
	int return_printf = 0;
	int return_ft_printf = 0;
	int nb_test = 0;
	char	*str = "Bonjour";

	
	printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m%-d", 10) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m%-d", 10) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");
	
	
printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=%-10d=", 10) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=%-10d=", 10) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=%-*.*d=", 2, 1, -6) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=%-*.*d=", 2, 1, -6) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m%d", -1000) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m%d", -1000) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");

printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=%.100d=", -1000) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=%.100d=", -1000) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=%*d=", 8, 666) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[32m=%*d=", 8, 666) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=%.d=", 0) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[32m=%.d=", 0) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");

	

printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=%100d=", -1000) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=%100d=", -1000) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m= %-3.2i=", 0) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m= %-3.2i=", 0) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m%c", 'a') - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m%c", 'a') - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);	
	return_ft_printf = ft_printf("\033[32m%s", "Bonjour") - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m%s", "Bonjour") - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m%d", -100) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m%d", -100) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


	
printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m%i", -100) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m%i", -100) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);	
	return_ft_printf = ft_printf("\033[32m%u", -1) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m%u", -1) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


	
printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m%x", 666) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m%x", 666) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


	
printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m%X", 666) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m%X", 666) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


	

printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m%p", str) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m%p", str) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=%-3.2i=", 0) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=%-3.2i=", 0) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


	printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=%-3.2i=%10.42i=", 10, -10) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf =  printf("\033[35m=%-3.2i=%10.42i=", 10, -10) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



	printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=%*c=", -2, '0') - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=%*c=", -2, '0') - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");

	
	
	printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=%10.2s=", "Bonjour") - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=%10.2s=", "Bonjour") - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



	printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=*%-*.*i*=*%*.*i*=", 4, 5, 10, 10, 21, -10) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=*%-*.*i*=*%*.*i*=", 4, 5, 10, 10, 21, -10) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



	printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m %-9.1s ", NULL) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m %-9.1s ", NULL) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



	printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=*%-*.*i*=*%*.*i*=", 6, 2, 102, 10, 21, -101) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=*%-*.*i*=*%*.*i*=", 6, 2, 102, 10, 21, -101) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


	printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=*%-*.*i=", 6, 2, 102) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=*%-*.*i=", 6, 2, 102) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");

printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=%*.2i=", 9, UINT_MAX) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=%*.2i=", 9, UINT_MAX) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


	printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m=--0*%0*.0i*0=0*%0*.10i*0--=", -2, 0, 21, 1) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m=--0*%0*.0i*0=0*%0*.10i*0--=", -2, 0, 21, 1) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");


	
	printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m= --0*%0*.0i*0 0*%0*.10i*0-- ", -2, 0, 21, 1) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m= --0*%0*.0i*0 0*%0*.10i*0-- ", -2, 0, 21, 1) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



	printf("\n\033[36m---------------TEST-%i------------------\033[39m\n", ++nb_test);
	return_ft_printf = ft_printf("\033[32m= --0*%0*.0i*0 0*%0*.10i*0-- ", -21, INT_MAX, 21, INT_MIN) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m= --0*%0*.0i*0 0*%0*.10i*0-- ", -21, INT_MAX, 21, INT_MIN) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");

/*	printf("\n\033[36m---------------TEST-6------------------\033[39m\n");
	return_ft_printf = ft_printf("\033[32mBonjour les maxi bg") - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35mBonjour les maxi bg") - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



	printf("\n\033[36m---------------TEST-7------------------\033[39m\n");
	return_ft_printf = ft_printf("\033[32m%p", "Bonjour") - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[35m%p", "Bonjour") - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



	printf("\n\033[36m---------------TEST-8------------------\033[39m\n");
	return_ft_printf = ft_printf("\033[32m%*i", 52, -4) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[32m%*i", 52, -4) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



	printf("\n\033[36m---------------TEST-9------------------\033[39m\n");
	return_ft_printf = ft_printf("\033[32m\"%-25d\"",1000) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[32m\"%-25d\"",1000) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



	printf("\n\033[36m---------------TEST-10-----------------\033[39m\n");
	return_ft_printf = ft_printf("\033[32m%% %% %%") - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[32m%% %% %%") - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");

	
	
	printf("\n\033[36m---------------TEST-11-----------------\033[39m\n");
	return_ft_printf = ft_printf("\033[32m%X", -666) - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[32m%X", -666) - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");



	printf("\n\033[36m---------------TEST-12-----------------\033[39m\n");
	return_ft_printf = ft_printf("\033[32m%*.s", 10, "4567") - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[32m%*.s ", 10, "4567") - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");

printf("\n\033[36m---------------TEST-12-----------------\033[39m\n");
	return_ft_printf = ft_printf("\033[32m%c", '0') - 5;
	printf("\n\033[36m---------------------------------------\033[39m\n");
	return_printf = printf("\033[32m%c", '0') - 5;
	printf("\n\033[36m---------Valeurs-de-retour------------\033[39m\n");
	printf("\033[33mValeur de retour de ft_printf = %d", return_ft_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n");
	printf("\033[33mValeur de retour de printf = %d", return_printf);
	printf("\n\033[36m---------------------------------------\033[39m\n\n\n");
	*/
//	while (1){}

	return (0);
}
