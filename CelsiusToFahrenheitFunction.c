/*
 * CelsiusToFahrenheitFunction.c
 *
 *  Created on: 01-Aug-2020
 *      Author: Marvelcoder
 */


#include<stdio.h>

double celsiusToFahrenheit(int c);

int main(){

	int celsius=-30;

	printf("Please enter temperature in celsius = %d°C\n",celsius);

	printf("Temperature in fahrenheit = %0.2f°F\n",celsiusToFahrenheit(celsius));

	return 0;

}

double celsiusToFahrenheit(int celsius){

	return (celsius * 9/5) + 32;

}
