/*
 * CelsiusToFahrenheit.c
 *
 *  Created on: 13-Jul-2020
 *      Author: Marvelcoder
 */

#include <stdio.h>

#define MAX_F 300
#define COUNTER 20

int main() {

	float celsius;
	int fahrenheit;

	printf("\tFahrenheit To Celsius Table\n\n");

	for (fahrenheit = 0; fahrenheit <= MAX_F; fahrenheit =
			fahrenheit + COUNTER) {

		celsius = 5 * (fahrenheit - 32) / 9;
		printf("\t%d°F     %.2f°C\n", fahrenheit, celsius);
	}

	printf("\n\tReverse Fahrenheit To Celsius Table\n\n");

	for (fahrenheit = MAX_F; fahrenheit >= 0; fahrenheit =
			fahrenheit - COUNTER) {

		celsius = 5 * (fahrenheit - 32) / 9;
		printf("\t%d°F     %.2f°C\n", fahrenheit, celsius);
	}

	return 0;
}
